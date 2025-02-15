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
