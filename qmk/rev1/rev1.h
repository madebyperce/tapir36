#pragma once

#include "tapir36.h"

#define LAYOUT_split_3x5_3( \
    L00, L01, L02, L03, L04,           R05, R06, R07, R08, R09, \
    L10, L11, L12, L13, L14,           R15, R16, R17, R18, R19, \
    L20, L21, L22, L23, L24,           R25, R26, R27, R28, R29, \
                   L30, L31, L32, R33, R34, R35 \
) \
{ \
    { L00,   L01,   L02,   L03,   L04    }, \
    { L10,   L11,   L12,   L13,   L14,   }, \
    { L20,   L21,   L22,   L23,   L24,   }, \
    { KC_NO, KC_NO, L30,   L31,   L32,   }, \
    { R05,   R06,   R07,   R08,   R09,   }, \
    { R15,   R16,   R17,   R18,   R19,   }, \
    { R25,   R26,   R27,   R28,   R29,   }, \
    { R33,   R34,   R35,   KC_NO, KC_NO, }, \
}
