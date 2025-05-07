// Copyright 2025 adamconde
// SPDX-License-Identifier: GPL-2.0-or-later

#include "sigil_slate.h"

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }
    return false;
}
