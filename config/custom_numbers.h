/*
 * use US number keys for a german keyboard layout
 * 1 -> !, 2 -> @, 3 -> #, 4 -> $, 5 -> %, 6 -> ^, 7 -> &, 8 -> *, 9 -> (, 0 -> )
 */
#pragma once

#define CUSTOM_NUMBER(name, num, sym) \
  ZMK_MOD_MORPH(name, \
    bindings = <num>, <sym>; \
    mods = <(MOD_LSFT|MOD_RSFT)>; \
  )

#define KP_CARET (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYPAD_CARET))
#define KP_AMPS (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYPAD_AMPERSAND))
#define KP_STAR (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYPAD_ASTERISK))
#define KP_LPAR (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYPAD_LEFT_PARENTHESIS))
#define KP_RPAR (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYPAD_RIGHT_PARENTHESIS))
  
CUSTOM_NUMBER(cn1, &kp N1, &kp EXCL)
CUSTOM_NUMBER(cn2, &kp N2, &kp LA(L)) // LALT + L = @
CUSTOM_NUMBER(cn3, &kp N3, &kp NON_US_HASH)
CUSTOM_NUMBER(cn4, &kp N4, &kp DLLR)
CUSTOM_NUMBER(cn5, &kp N5, &kp PRCNT)
CUSTOM_NUMBER(cn6, &kp N6, &kp KP_CARET)
CUSTOM_NUMBER(cn7, &kp N7, &kp KP_AMPS)
CUSTOM_NUMBER(cn8, &kp N8, &kp KP_STAR)
CUSTOM_NUMBER(cn9, &kp N9, &kp KP_LPAR)
CUSTOM_NUMBER(cn0, &kp N0, &kp KP_RPAR)
