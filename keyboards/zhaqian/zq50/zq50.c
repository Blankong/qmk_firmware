/* Copyright 2022 ZhaQian
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#ifdef RGB_MATRIX_ENABLE

led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
	{   0, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13 },  
	{  15,16,17,18,19,20,21,22,23,24,25,26,27,28 },  
    {  30,31,32,33,34,35,36,37,38,39,40,41,42,43 }, 
    {  45,46,47,48,49,50,51,52,53,54,55,56,57,14 },    
    {  59,60,61,62,63,64,65,66,67,68,69,70,71,29 },
	{  72,73,74,NO_LED,NO_LED,75,NO_LED,76,77,78,79,80,58,44 },
	},
    { // LED Index to Physical Position
		// x = 224 / (NUMBER_OF_COLS - 1) * COL_POSITION
		// y = 64 / (NUMBER_OF_ROWS - 1) * ROW_POSITION
        { 0, 0 },{ 6, 0 },{ 16, 0 },{ 24, 0 },{ 36, 0 },{ 48, 0 },{ 64, 0 },{ 80, 0 },{ 96, 0 },{ 112, 0 },{ 128, 0 },{ 144, 0 },{ 160, 0 }, { 176, 0 },{ 192, 0 },{ 208, 0 },\
		{ 6, 16 },{ 16, 16 },{ 24, 16 },{ 36, 16 },{ 48, 16 },{ 64, 16 },{ 80, 16 },{ 96, 16 },{ 112, 16 },{ 128, 16 },{ 144, 16 },{ 160, 16 }, { 176, 16 },{ 192, 16 },{ 208, 16 },\
		{ 6, 32 },{ 16, 32 },{ 24, 32 },{ 36, 32 },{ 48, 32 },{ 64, 32 },{ 80, 32 },{ 96, 32 },{ 112, 32 },{ 128, 32 },{ 144, 32 },{ 160, 32 }, { 176, 32 },{ 192, 32 },{ 208, 32 },\
		{ 6, 48 },{ 16, 48 },{ 24, 48 },{ 36, 48 },{ 48, 48 },{ 64, 48 },{ 80, 48 },{ 96, 48 },{ 112, 48 },{ 128, 48 },{ 144, 48 },{ 160, 48 }, { 176, 48 },{ 192, 48 },\
		{ 6, 51 },{ 16, 51 },{ 24, 51 },{ 36, 51 },{ 48, 51 },{ 64, 51 },{ 80, 51 },{ 96, 51 },{ 112, 51 },{ 128, 51 },{ 144, 51 },{ 160, 51 }, { 176, 51 },\
		{ 6, 64 },{ 16, 64 },{ 24, 64 },{ 86, 64 },{ 128, 64 },{ 144, 64 },{ 176, 64 },{ 192, 64 },{ 208, 64 } \
	 },
    { // LED Index to Flag
	    2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
		4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
		4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
		4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
		4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 }
};

bool rgb_matrix_indicators_kb(void) {
    if (!rgb_matrix_indicators_user()) { 
        return false; 
    }

    HSV hsv = {0, 255, rgb_matrix_get_val()};
    RGB rgb = hsv_to_rgb(hsv);
    switch(biton32(layer_state)) {
        case 1: rgb_matrix_set_color(1, rgb.r, rgb.g, rgb.b); break;
        case 2: rgb_matrix_set_color(2, rgb.r, rgb.g, rgb.b); break;
        case 3: rgb_matrix_set_color(3, rgb.r, rgb.g, rgb.b); break;
        case 4: rgb_matrix_set_color(4, rgb.r, rgb.g, rgb.b); break;
        case 5: rgb_matrix_set_color(5, rgb.r, rgb.g, rgb.b); break;
        case 6: rgb_matrix_set_color(6, rgb.r, rgb.g, rgb.b); break;
        default: break;
    }
    return true;
}

#endif
