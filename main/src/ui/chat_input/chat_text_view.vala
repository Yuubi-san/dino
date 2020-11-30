using Gdk;
using Gee;
using Gtk;

using Dino.Entities;
using Xmpp;

namespace Dino.Ui {

public class ChatTextViewController : Object {

    public signal void send_text();

    public OccupantsTabCompletor occupants_tab_completor;

    private ChatTextView widget;

    public ChatTextViewController(ChatTextView widget, StreamInteractor stream_interactor) {
        this.widget = widget;
        occupants_tab_completor = new OccupantsTabCompletor(stream_interactor, widget.text_view);

        widget.send_text.connect(() => {
            send_text();
        });
    }

    public void initialize_for_conversation(Conversation conversation) {
        occupants_tab_completor.initialize_for_conversation(conversation);
        widget.initialize_for_conversation(conversation);
    }
}

public class ChatTextView : ScrolledWindow {

    public signal void send_text();
    public signal void cancel_input();

    public TextView text_view = new TextView() { can_focus=true, hexpand=true, margin=8, wrap_mode=Gtk.WrapMode.WORD_CHAR, valign=Align.CENTER, visible=true };
    private int vscrollbar_min_height;
    private SmileyConverter smiley_converter;
    public EditHistory edit_history;

    construct {
        max_content_height = 300;
        propagate_natural_height = true;
        this.add(text_view);

        smiley_converter = new SmileyConverter(text_view);
        edit_history = new EditHistory(text_view);

        this.get_vscrollbar().get_preferred_height(out vscrollbar_min_height, null);
        this.vadjustment.notify["upper"].connect_after(on_upper_notify);
        text_view.key_press_event.connect(on_text_input_key_press);
    #if _WIN32
        text_view.touch_event.connect(on_touch_event);
        text_view.button_press_event.connect(on_button_press);
    #endif

        Gtk.drag_dest_unset(text_view);
    }

    public void initialize_for_conversation(Conversation conversation) {
        edit_history.initialize_for_conversation(conversation);
    }

    public override void get_preferred_height(out int min_height, out int nat_height) {
        base.get_preferred_height(out min_height, out nat_height);
        min_height = nat_height;
    }

    private void on_upper_notify() {
        this.vadjustment.value = this.vadjustment.upper - this.vadjustment.page_size;

        // hack for vscrollbar not requiring space and making textview higher //TODO doesn't resize immediately
        this.get_vscrollbar().visible = (this.vadjustment.upper > this.max_content_height - 2 * this.vscrollbar_min_height);
    }

    private bool on_text_input_key_press(EventKey event) {
        if (event.keyval in new uint[]{Key.Return, Key.KP_Enter}) {
            if ((event.state & ModifierType.SHIFT_MASK) > 0) {
                text_view.buffer.insert_at_cursor("\n", 1);
            } else if (text_view.buffer.text.strip() != "") {
                send_text();
                edit_history.reset_history();
            }
            return true;
        }
        if (event.keyval == Key.Escape) {
            cancel_input();
        }
        return false;
    }

#if _WIN32
    private bool on_touch_event(Event event) {
        stdout.printf("Received event!\n");
        if (event != null && event.get_event_type() == EventType.TOUCH_END) {
            var touch_event = event.touch;
            stdout.printf("Received end touch event!\n");
        }

        var ret = open_keyboard();
        stdout.flush();
        return ret;
    }

    private bool on_button_press(EventButton event) {
        stdout.printf("Click event\n");
        var ret = open_keyboard();
        stdout.flush();
        return ret;
    }

    private bool open_keyboard() {
        var path = "C:\\Program Files\\Common Files\\microsoft shared\\ink\\TabTip.exe";
        File file = File.new_for_path(path);
        if (!file.query_exists()) {
            stdout.printf("TabTip not found, trying osk.\n");
            path = GLib.Environment.find_program_in_path("osk.exe");
            if (path == null || path.length == 0) {
                stdout.printf("No Virtual Keyboard found :(\n");
                return false;
            }
        }

        try {
            //path = "'" + path + "'";
            stdout.printf("Spawning %s.\n", path);
            //GLib.Process.spawn_command_line_async(path);
            //Pid child_process_handle;
            //GLib.Process.spawn_async(null, new string[] { path, "" }, null, 0, null, out child_process_handle);
            Dino.Util.launch_default_for_uri(path);
            return true;
        }
        catch (SpawnError err) {
            stdout.printf("Unable to spawn keyboard process. Error: %s\n", err.message);
        }

        return false;
    }
#endif
}

}
