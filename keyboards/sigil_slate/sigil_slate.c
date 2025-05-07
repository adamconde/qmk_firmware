// Copyright 2025 adamconde
// SPDX-License-Identifier: GPL-2.0-or-later

#include "sigil_slate.h"

__attribute__((weak)) bool encoder_update_kb(uint8_t index, bool clockwise) {
    return encoder_update_user(index, clockwise);
}

// This layout macro must exactly match the order of keys in your keymap.c
#define LAYOUT_numpad_6x5( \
    K00, K01, K02, K03, K04, \
    K10, K11, K12, K13, K14, \
    K20, K21, K22, K23,       \
    K30, K31, K32, K33, K34, \
    K40, K41, K42, K43,       \
    K50, K51,      K53, K54  \
) { \
    { K00, K01, K02, K03, K04 }, \
    { K10, K11, K12, K13, K14 }, \
    { K20, K21, K22, K23, KC_NO }, \
    { K30, K31, K32, K33, K34 }, \
    { K40, K41, K42, K43, KC_NO }, \
    { K50, K51, KC_NO, K53, K54 }  \
}
