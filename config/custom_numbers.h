/*
 * use custom US keys for a german keyboard layout
 * 1 -> !, 2 -> @, 3 -> #, 4 -> $, 5 -> %, 6 -> ^, 7 -> &, 8 -> *, 9 -> (, 0 -> )
 */
#pragma once

#define CUSTOM_MAPPING(name, num, sym) \
  ZMK_MOD_MORPH(name, \
    bindings = <num>, <sym>; \
    mods = <(MOD_LSFT|MOD_RSFT)>; \
  )

// custom number keys
#define KP_STAR (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYPAD_ASTERISK))
CUSTOM_MAPPING(cn1, &kp N1, &kp EXCL)
CUSTOM_MAPPING(cn2, &kp N2, &kp LA(L)) // LALT + L = @
CUSTOM_MAPPING(cn3, &kp N3, &kp NON_US_HASH)
CUSTOM_MAPPING(cn4, &kp N4, &kp DLLR)
CUSTOM_MAPPING(cn5, &kp N5, &kp PRCNT)
CUSTOM_MAPPING(cn6, &kp N6, &kp NON_US_BSLH)
CUSTOM_MAPPING(cn7, &kp N7, &kp LS(N6)) // LSHIFT + N6 = &
CUSTOM_MAPPING(cn8, &kp N8, &kp KP_STAR)
CUSTOM_MAPPING(cn9, &kp N9, &kp LS(N8)) // LSHIFT + N8 = (
CUSTOM_MAPPING(cn0, &kp N0, &kp LS(N9)) // LSHIFT + N9 = )

// equal (=) and plus (+) keys
CUSTOM_MAPPING(equal_plus, &kp DE_EQUAL, &kp DE_PLUS)
// single quote (') and double quote (") keys
CUSTOM_MAPPING(sqt_dqt, &kp DE_SQT, &kp DE_DQT)
// comma (,) and less than (<) keys
CUSTOM_MAPPING(comma_lt, &kp DE_COMMA, &kp NUBS)
// period (.) and greater than (>) keys
CUSTOM_MAPPING(dot_gt, &kp DE_DOT, &kp PIPE2)
// slash (/) and question mark (?) keys
CUSTOM_MAPPING(slash_question, &kp DE_FSLH, &kp DE_QMARK)
// semicolon (;) and colon (:) keys
CUSTOM_MAPPING(semi_colon, &kp DE_SEMI, &kp LS(DE_DOT))
// left bracket ([) and left brace ({) keys
CUSTOM_MAPPING(lbkt_brc, &kp LA(N5), &kp DE_LBKT)
// right bracket (]) and right brace (}) keys
CUSTOM_MAPPING(rbkt_brc, &kp LA(N6), &kp DE_RBKT)
