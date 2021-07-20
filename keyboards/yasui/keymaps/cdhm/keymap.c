/* Copyright 2021 Regan Palmer
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.	Test
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	LAYOUT(
		KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT,
		MT(MOD_LGUI, KC_A), MT(MOD_LALT, KC_R), MT(MOD_LCTL, KC_S), MT(MOD_LSFT, KC_T), KC_G, KC_M, MT(MOD_RSFT, KC_N), MT(MOD_RCTL, KC_E), MT(MOD_RALT, KC_I), MT(MOD_RGUI, KC_O),
		KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLASH,
		KC_TRNS, KC_LGUI, TG(1), KC_SPC, KC_TAB, KC_ESC, LT(2, KC_BSPC), LT(3, KC_ENT), KC_INS, KC_TRNS),

	LAYOUT(
		KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
		KC_ENT, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O,
		KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_I, KC_J, KC_K,
		KC_LCTL, KC_Z, KC_X, KC_C, KC_SPC, KC_B, KC_N, KC_M, KC_TRNS, TO(0)),

	LAYOUT(
		KC_7, KC_8, KC_9, KC_MINS, KC_EQL, KC_ASTR, KC_EXLM, KC_DLR, KC_SCLN, KC_TRNS,
		KC_4, KC_5, KC_6, KC_LPRN, KC_RPRN, KC_PERC, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT,
		KC_1, KC_2, KC_3, KC_LBRC, KC_RBRC, KC_BSLS, KC_SLSH, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_0, KC_TRNS, KC_TRNS, KC_LT, KC_GT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	LAYOUT(
		KC_F7, KC_F8, KC_F9, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,
		KC_F4, KC_F5, KC_F6, KC_F11, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_F1, KC_F2, KC_F3, KC_F10, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

};
