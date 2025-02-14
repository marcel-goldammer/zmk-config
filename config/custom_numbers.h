/*
 * use US number keys for a german keyboard layout
 * 1 -> !, 2 -> @, 3 -> #, 4 -> $, 5 -> %, 6 -> ^, 7 -> &, 8 -> *, 9 -> (, 0 -> )
 */
#pragma once

#define CUSTOM_NUMBER(name, num, sym) \
  ZMK_MOD_MORPH(name, \
    bindings = <&kp num>, <&kp sym> \
    mods = <(MOD_LSFT|MOD_RSFT)> \
  )

CUSTOM_NUMBER(cn1, N1, EXCL);
CUSTOM_NUMBER(cn2, N2, AT);
CUSTOM_NUMBER(cn3, N3, HASH);
CUSTOM_NUMBER(cn4, N4, DLLR);
CUSTOM_NUMBER(cn5, N5, PRCNT);
CUSTOM_NUMBER(cn6, N6, CARET);
CUSTOM_NUMBER(cn7, N7, AMPS);
CUSTOM_NUMBER(cn8, N8, STAR);
CUSTOM_NUMBER(cn9, N9, LPAR);
CUSTOM_NUMBER(cn0, N0, RPAR);
