#include <yed/plugin.h>

#define MAYBE_CONVERT(rgb) (tc ? (rgb) : rgb_to_256(rgb))

PACKABLE_STYLE(alchemist) {
    yed_style s;
    int       tc,
              attr_kind;

    YED_PLUG_VERSION_CHECK();

    tc        = !!yed_get_var("truecolor");
    attr_kind = tc ? ATTR_KIND_RGB : ATTR_KIND_256;

    memset(&s, 0, sizeof(s));
    ATTR_SET_FG_KIND(s.active.flags, attr_kind);
    s.active.fg     = MAYBE_CONVERT(0xc9bfb6);
    ATTR_SET_BG_KIND(s.active.flags, attr_kind);
    s.active.bg     = MAYBE_CONVERT(0x113537);

    ATTR_SET_FG_KIND(s.active_border.flags, attr_kind);
    s.active_border.fg     = MAYBE_CONVERT(0x7180ac);
    ATTR_SET_BG_KIND(s.active_border.flags, attr_kind);
    s.active_border.bg     = MAYBE_CONVERT(0x113537);

    ATTR_SET_FG_KIND(s.active_gutter.flags, attr_kind);
    s.active_gutter.fg     = MAYBE_CONVERT(0xc9bfb6);
    ATTR_SET_BG_KIND(s.active_gutter.flags, attr_kind);
    s.active_gutter.bg     = MAYBE_CONVERT(0x113537);

    ATTR_SET_FG_KIND(s.inactive.flags, attr_kind);
    s.inactive.fg     = MAYBE_CONVERT(0xc9bfb6);
    ATTR_SET_BG_KIND(s.inactive.flags, attr_kind);
    s.inactive.bg     = MAYBE_CONVERT(0x113537);

    ATTR_SET_FG_KIND(s.inactive_border.flags, attr_kind);
    s.inactive_border.fg     = MAYBE_CONVERT(0x7180ac);
    ATTR_SET_BG_KIND(s.inactive_border.flags, attr_kind);
    s.inactive_border.bg     = MAYBE_CONVERT(0x113537);

    ATTR_SET_FG_KIND(s.inactive_gutter.flags, attr_kind);
    s.inactive_gutter.fg     = MAYBE_CONVERT(0xc9bfb6);
    ATTR_SET_BG_KIND(s.inactive_gutter.flags, attr_kind);
    s.inactive_gutter.bg     = MAYBE_CONVERT(0x113537);

    ATTR_SET_BG_KIND(s.cursor_line.flags, attr_kind);
    s.cursor_line.bg     = MAYBE_CONVERT(0x355070);

    ATTR_SET_BG_KIND(s.selection.flags, attr_kind);
    s.selection.bg     = MAYBE_CONVERT(0x355070);

    ATTR_SET_FG_KIND(s.search.flags, attr_kind);
    s.search.fg     = MAYBE_CONVERT(0x49d45c);
    ATTR_SET_BG_KIND(s.search.flags, attr_kind);
    s.search.bg     = MAYBE_CONVERT(0x170326);
    s.search.flags |= 0 | ATTR_INVERSE;

    ATTR_SET_FG_KIND(s.search_cursor.flags, attr_kind);
    s.search_cursor.fg     = MAYBE_CONVERT(0xd4495c);
    ATTR_SET_BG_KIND(s.search_cursor.flags, attr_kind);
    s.search_cursor.bg     = MAYBE_CONVERT(0x170326);
    s.search_cursor.flags |= 0 | ATTR_INVERSE;

    ATTR_SET_FG_KIND(s.attention.flags, attr_kind);
    s.attention.fg     = MAYBE_CONVERT(0xc00000);
    s.attention.flags |= 0 | ATTR_BOLD;

    ATTR_SET_FG_KIND(s.associate.flags, attr_kind);
    s.associate.fg     = MAYBE_CONVERT(0xc9bfb6);
    ATTR_SET_BG_KIND(s.associate.flags, attr_kind);
    s.associate.bg     = MAYBE_CONVERT(0x900040);

    ATTR_SET_FG_KIND(s.status_line.flags, attr_kind);
    s.status_line.fg     = MAYBE_CONVERT(0x252730);
    ATTR_SET_BG_KIND(s.status_line.flags, attr_kind);
    s.status_line.bg     = MAYBE_CONVERT(0x7180ac);
    s.status_line.flags |= 0 | ATTR_BOLD;

    ATTR_SET_FG_KIND(s.command_line.flags, attr_kind);
    s.command_line.fg     = MAYBE_CONVERT(0xc9bfb6);
    ATTR_SET_BG_KIND(s.command_line.flags, attr_kind);
    s.command_line.bg     = MAYBE_CONVERT(0x113537);

    ATTR_SET_FG_KIND(s.popup.flags, attr_kind);
    s.popup.fg     = MAYBE_CONVERT(0xc9bfb6);
    ATTR_SET_BG_KIND(s.popup.flags, attr_kind);
    s.popup.bg     = MAYBE_CONVERT(0x900040);

    ATTR_SET_FG_KIND(s.popup_alt.flags, attr_kind);
    s.popup_alt.fg     = MAYBE_CONVERT(0xc9bfb6);
    ATTR_SET_BG_KIND(s.popup_alt.flags, attr_kind);
    s.popup_alt.bg     = MAYBE_CONVERT(0x900040);
    s.popup_alt.flags |= 0 | ATTR_INVERSE;

    ATTR_SET_FG_KIND(s.good.flags, attr_kind);
    s.good.fg     = MAYBE_CONVERT(0x9000);

    ATTR_SET_FG_KIND(s.bad.flags, attr_kind);
    s.bad.fg     = MAYBE_CONVERT(0xe00000);

    ATTR_SET_FG_KIND(s.code_comment.flags, attr_kind);
    s.code_comment.fg     = MAYBE_CONVERT(0x909090);
    s.code_comment.flags |= 0 | ATTR_BOLD;

    ATTR_SET_FG_KIND(s.code_keyword.flags, attr_kind);
    s.code_keyword.fg     = MAYBE_CONVERT(0x8bbeb2);

    ATTR_SET_FG_KIND(s.code_control_flow.flags, attr_kind);
    s.code_control_flow.fg     = MAYBE_CONVERT(0x8bbeb2);

    ATTR_SET_FG_KIND(s.code_typename.flags, attr_kind);
    s.code_typename.fg     = MAYBE_CONVERT(0xf2af29);

    ATTR_SET_FG_KIND(s.code_preprocessor.flags, attr_kind);
    s.code_preprocessor.fg     = MAYBE_CONVERT(0x6153cc);
    s.code_preprocessor.flags |= 0 | ATTR_BOLD;

    ATTR_SET_FG_KIND(s.code_fn_call.flags, attr_kind);
    s.code_fn_call.fg     = MAYBE_CONVERT(0x8cbcd9);

    ATTR_SET_FG_KIND(s.code_number.flags, attr_kind);
    s.code_number.fg     = MAYBE_CONVERT(0xe56b6f);

    ATTR_SET_FG_KIND(s.code_constant.flags, attr_kind);
    s.code_constant.fg     = MAYBE_CONVERT(0x6153cc);
    s.code_constant.flags |= 0 | ATTR_BOLD;

    ATTR_SET_FG_KIND(s.code_field.flags, attr_kind);
    s.code_field.fg     = MAYBE_CONVERT(0xa99fc6);

    ATTR_SET_FG_KIND(s.code_variable.flags, attr_kind);
    s.code_variable.fg     = MAYBE_CONVERT(0xa99fc6);

    ATTR_SET_FG_KIND(s.code_string.flags, attr_kind);
    s.code_string.fg     = MAYBE_CONVERT(0xdcccff);

    ATTR_SET_FG_KIND(s.code_character.flags, attr_kind);
    s.code_character.fg     = MAYBE_CONVERT(0xdcccff);

    ATTR_SET_FG_KIND(s.code_escape.flags, attr_kind);
    s.code_escape.fg     = MAYBE_CONVERT(0xef009f);

    yed_plugin_set_style(self, "alchemist", &s);
    return 0;
}
