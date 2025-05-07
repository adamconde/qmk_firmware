// Copyright 2025 adamconde
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┌───┬───┬───┬───┐
     * │Mte│Esc│Hme│End│Bsp│
     * ├───┼───┼───┼───┼───┤
     * │M01│Num│ / │ * │ - │
     * ├───┼───┼───┼───┼───┤
     * │M02│ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┼───┤ + │
     * │M03│ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┼───┤
     * │M04│ 1 │ 2 │ 3 │   │
     * ├───┼───┴───┼───┤Ent│
     * │M05│ 0     │ . │   │
     * └───┴───────┴───┴───┘
     */
    [0] = LAYOUT_numpad_6x5(
        KC_MUTE,  KC_ESC,  KC_HOME, KC_END,  KC_BSPC,
        MO(1),    KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
        MO(2),    KC_P7,   KC_P8,   KC_P9,
        MO(3),    KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
        MO(4),    KC_P1,   KC_P2,   KC_P3,
        MO(5),    KC_P0,            KC_PDOT, KC_PENT
    ),

    /*
     * ┌───┌───┐───┬───┬───┐
     * │Mte│Rst│Tab│Hme│Bsp│
     * ├───┼───┘───┼───┼───┤
     * │M01│Num│ / │ * │ - │
     * ├───┼───┼───┼───┼───┤
     * │M02│Hom│ ↑ │PgU│   │
     * ├───┼───┼───┼───┤ + │
     * │M03│ ← │   │ → │   │
     * ├───┼───┼───┼───┤───┤
     * │M04│End│ ↓ │PgD│   │
     * ├───┼───┴───┼───┤Ent│
     * │M05│Insert │Del│   │
     * └───┴───────┴───┘───┘
     */
    [1] = LAYOUT_numpad_6x5(
        _______, QK_BOOT,   _______, _______, _______,
        _______, _______,   _______, _______, _______,
        _______, KC_HOME,   KC_UP,   KC_PGUP,
        _______, KC_LEFT,   XXXXXXX, KC_RGHT, _______,
        _______, KC_END,    KC_DOWN, KC_PGDN,
        _______, KC_INS,             KC_DEL,  _______
    )
};
