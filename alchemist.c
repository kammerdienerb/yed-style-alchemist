#include <yed/plugin.h>

PACKABLE_STYLE(alchemist) {
    yed_style s;

    memset(&s, 0, sizeof(s));
    s.active.flags = 0 | ATTR_RGB;
    s.active.fg    = 0xc9bfb6;
    s.active.bg    = 0x113537;

    s.active_border.flags = 0 | ATTR_RGB;
    s.active_border.fg    = 0x7180ac;
    s.active_border.bg    = 0x113537;

    s.active_gutter.flags = 0 | ATTR_RGB;
    s.active_gutter.fg    = 0xc9bfb6;
    s.active_gutter.bg    = 0x113537;

    s.inactive.flags = 0 | ATTR_RGB;
    s.inactive.fg    = 0xc9bfb6;
    s.inactive.bg    = 0x113537;

    s.inactive_border.flags = 0 | ATTR_RGB;
    s.inactive_border.fg    = 0x7180ac;
    s.inactive_border.bg    = 0x113537;

    s.inactive_gutter.flags = 0 | ATTR_RGB;
    s.inactive_gutter.fg    = 0xc9bfb6;
    s.inactive_gutter.bg    = 0x113537;

    s.cursor_line.flags = 0 | ATTR_RGB;
    s.cursor_line.fg    = 0x0;
    s.cursor_line.bg    = 0x355070;

    s.selection.flags = 0 | ATTR_RGB;
    s.selection.fg    = 0x0;
    s.selection.bg    = 0x355070;

    s.search.flags = 0 | ATTR_INVERSE | ATTR_RGB;
    s.search.fg    = 0x49d45c;
    s.search.bg    = 0x170326;

    s.search_cursor.flags = 0 | ATTR_INVERSE | ATTR_RGB;
    s.search_cursor.fg    = 0xd4495c;
    s.search_cursor.bg    = 0x170326;

    s.attention.flags = 0 | ATTR_BOLD | ATTR_RGB;
    s.attention.fg    = 0xc00000;
    s.attention.bg    = 0x0;

    s.associate.flags = 0 | ATTR_RGB;
    s.associate.fg    = 0xc9bfb6;
    s.associate.bg    = 0x900040;

    s.status_line.flags = 0 | ATTR_BOLD | ATTR_RGB;
    s.status_line.fg    = 0x252730;
    s.status_line.bg    = 0x7180ac;

    s.command_line.flags = 0 | ATTR_RGB;
    s.command_line.fg    = 0xc9bfb6;
    s.command_line.bg    = 0x113537;

    s.popup.flags = 0 | ATTR_RGB;
    s.popup.fg    = 0xc9bfb6;
    s.popup.bg    = 0x900040;

    s.popup_alt.flags = 0 | ATTR_INVERSE | ATTR_RGB;
    s.popup_alt.fg    = 0xc9bfb6;
    s.popup_alt.bg    = 0x900040;

    s.good.flags = 0 | ATTR_RGB;
    s.good.fg    = 0x9000;
    s.good.bg    = 0x0;

    s.bad.flags = 0 | ATTR_RGB;
    s.bad.fg    = 0xe00000;
    s.bad.bg    = 0x0;

    s.code_comment.flags = 0 | ATTR_BOLD | ATTR_RGB;
    s.code_comment.fg    = 0x909090;
    s.code_comment.bg    = 0x0;

    s.code_keyword.flags = 0 | ATTR_RGB;
    s.code_keyword.fg    = 0x8bbeb2;
    s.code_keyword.bg    = 0x0;

    s.code_control_flow.flags = 0 | ATTR_RGB;
    s.code_control_flow.fg    = 0x8bbeb2;
    s.code_control_flow.bg    = 0x0;

    s.code_typename.flags = 0 | ATTR_RGB;
    s.code_typename.fg    = 0xf2af29;
    s.code_typename.bg    = 0x0;

    s.code_preprocessor.flags = 0 | ATTR_BOLD | ATTR_RGB;
    s.code_preprocessor.fg    = 0x6153cc;
    s.code_preprocessor.bg    = 0x0;

    s.code_fn_call.flags = 0 | ATTR_RGB;
    s.code_fn_call.fg    = 0x8cbcd9;
    s.code_fn_call.bg    = 0x0;

    s.code_number.flags = 0 | ATTR_RGB;
    s.code_number.fg    = 0xe56b6f;
    s.code_number.bg    = 0x0;

    s.code_constant.flags = 0 | ATTR_BOLD | ATTR_RGB;
    s.code_constant.fg    = 0x6153cc;
    s.code_constant.bg    = 0x0;

    s.code_field.flags = 0 | ATTR_RGB;
    s.code_field.fg    = 0xa99fc6;
    s.code_field.bg    = 0x0;

    s.code_variable.flags = 0 | ATTR_RGB;
    s.code_variable.fg    = 0xa99fc6;
    s.code_variable.bg    = 0x0;

    s.code_string.flags = 0 | ATTR_RGB;
    s.code_string.fg    = 0xdcccff;
    s.code_string.bg    = 0x0;

    s.code_character.flags = 0 | ATTR_RGB;
    s.code_character.fg    = 0xdcccff;
    s.code_character.bg    = 0x0;

    s.code_escape.flags = 0 | ATTR_RGB;
    s.code_escape.fg    = 0xef009f;
    s.code_escape.bg    = 0x0;

    yed_plugin_set_style(self, "alchemist", &s);
    return 0;
}
