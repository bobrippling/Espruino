/*
 * This file is part of Espruino, a JavaScript interpreter for Microcontrollers
 *
 * Copyright (C) 2013 Gordon Williams <gw@pur3.co.uk>
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * ----------------------------------------------------------------------------
 * This file is designed to be parsed during the build process
 *
 * Contains Custom Fonts
 * ----------------------------------------------------------------------------
 */

#include "jswrap_font_monofonto_18.h"
#include "jswrap_graphics.h"

// Monofonto (ASCII upper and lowercase) at 2bpp. Nominal height: 18px, cap height: 17px, total height = 21px

// Fixed width: 9px

static const unsigned char fontBitmap[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 255, 254, 15, 192, 15, 255, 255, 203, 240, 3, 255, 255, 224, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 80, 0, 0, 0, 63, 252, 0, 0, 0, 15, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 240, 0, 0, 0, 63, 252, 0, 0, 0, 5, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 46, 11, 255, 192, 0, 15, 255, 255, 224, 2, 255, 255, 252, 0, 0, 255, 252, 47, 255, 0, 0, 63, 255, 255, 192, 11, 255, 255, 240, 0, 3, 255, 240, 184, 0, 0, 64, 180, 0, 0, 0, 0, 80, 0, 16, 0, 3, 255, 208, 31, 192, 3, 255, 253, 7, 252, 2, 254, 191, 192, 127, 160, 255, 3, 252, 15, 253, 31, 224, 127, 219, 245, 3, 253, 11, 255, 248, 0, 47, 64, 191, 252, 0, 0, 0, 1, 144, 0, 15, 255, 248, 0, 176, 3, 234, 175, 2, 252, 0, 255, 255, 207, 244, 0, 47, 255, 255, 208, 0, 0, 0, 255, 64, 0, 0, 7, 255, 255, 248, 0, 31, 243, 255, 255, 0, 63, 192, 249, 91, 208, 15, 0, 31, 255, 240, 0, 0, 0, 191, 224, 0, 47, 209, 255, 255, 0, 63, 255, 254, 111, 192, 15, 175, 255, 3, 240, 3, 235, 255, 255, 252, 0, 191, 244, 191, 252, 0, 2, 144, 11, 255, 192, 0, 0, 15, 251, 240, 0, 0, 1, 240, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 170, 128, 0, 0, 0, 255, 240, 0, 0, 0, 42, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 1, 255, 255, 255, 128, 31, 255, 255, 255, 255, 143, 253, 64, 0, 111, 255, 128, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 123, 255, 80, 0, 27, 255, 127, 255, 255, 255, 254, 0, 127, 255, 255, 224, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 64, 0, 0, 0, 3, 224, 240, 0, 0, 0, 188, 254, 0, 0, 10, 159, 254, 0, 0, 3, 255, 248, 0, 0, 0, 169, 255, 208, 0, 0, 0, 189, 254, 0, 0, 0, 62, 15, 0, 0, 0, 31, 64, 0, 0, 0, 0, 3, 192, 0, 0, 0, 0, 240, 0, 0, 0, 0, 60, 0, 0, 0, 6, 175, 169, 0, 0, 3, 255, 255, 192, 0, 0, 106, 250, 160, 0, 0, 0, 60, 0, 0, 0, 0, 15, 0, 0, 0, 0, 3, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 191, 252, 0, 0, 0, 31, 254, 0, 0, 0, 3, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 7, 208, 0, 0, 0, 1, 244, 0, 0, 0, 0, 125, 0, 0, 0, 0, 31, 64, 0, 0, 0, 7, 208, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 240, 0, 0, 0, 2, 252, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 1, 255, 192, 0, 0, 31, 255, 64, 0, 1, 255, 244, 0, 0, 31, 255, 128, 0, 1, 191, 248, 0, 0, 11, 255, 128, 0, 0, 15, 248, 0, 0, 0, 3, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 255, 255, 255, 192, 3, 255, 255, 255, 252, 0, 254, 170, 170, 191, 0, 62, 0, 0, 7, 208, 15, 234, 170, 171, 240, 3, 255, 255, 255, 252, 0, 63, 255, 255, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 64, 0, 0, 0, 15, 224, 0, 0, 0, 11, 245, 85, 85, 64, 7, 255, 255, 255, 240, 3, 255, 255, 255, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 63, 192, 0, 11, 0, 63, 240, 0, 63, 192, 15, 208, 1, 255, 240, 3, 240, 7, 255, 252, 0, 254, 191, 255, 127, 0, 47, 255, 252, 15, 192, 2, 255, 224, 3, 240, 0, 0, 0, 0, 0, 0, 1, 0, 0, 64, 0, 15, 208, 0, 127, 0, 15, 244, 0, 31, 240, 3, 244, 0, 1, 252, 0, 252, 11, 192, 63, 64, 63, 155, 253, 111, 192, 11, 255, 255, 255, 240, 0, 191, 247, 255, 240, 0, 0, 64, 26, 64, 0, 0, 0, 31, 240, 0, 0, 0, 191, 252, 0, 0, 2, 255, 255, 0, 0, 31, 254, 15, 192, 0, 63, 253, 91, 245, 64, 15, 255, 255, 255, 240, 3, 255, 255, 255, 252, 0, 85, 85, 111, 213, 0, 0, 0, 3, 240, 0, 0, 0, 20, 4, 0, 3, 255, 255, 199, 240, 0, 255, 255, 225, 255, 0, 63, 151, 240, 31, 192, 15, 192, 252, 3, 244, 3, 240, 63, 150, 252, 0, 252, 15, 255, 255, 0, 63, 0, 255, 255, 0, 0, 0, 1, 164, 0, 0, 0, 0, 106, 0, 0, 0, 7, 255, 252, 0, 0, 47, 255, 255, 192, 0, 191, 254, 75, 240, 2, 255, 255, 0, 253, 0, 255, 143, 228, 191, 0, 62, 2, 255, 255, 192, 4, 0, 47, 255, 192, 0, 0, 0, 170, 0, 0, 168, 0, 0, 0, 0, 63, 0, 0, 2, 192, 15, 192, 0, 47, 240, 3, 240, 6, 255, 252, 0, 252, 127, 255, 253, 0, 63, 255, 255, 144, 0, 15, 255, 244, 0, 0, 3, 254, 64, 0, 0, 0, 144, 0, 0, 0, 0, 0, 84, 6, 164, 0, 3, 255, 239, 255, 192, 3, 255, 255, 255, 252, 0, 254, 111, 244, 191, 0, 63, 3, 240, 15, 208, 15, 230, 255, 75, 240, 3, 255, 255, 255, 252, 0, 63, 254, 255, 252, 0, 0, 100, 6, 164, 0, 0, 42, 64, 0, 0, 0, 255, 253, 0, 4, 0, 255, 255, 192, 47, 0, 63, 135, 244, 191, 192, 15, 192, 127, 255, 240, 3, 248, 127, 255, 128, 0, 255, 255, 254, 0, 0, 15, 255, 248, 0, 0, 0, 42, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 192, 125, 0, 0, 11, 240, 63, 192, 0, 0, 252, 7, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 3, 240, 63, 254, 0, 2, 252, 15, 255, 64, 0, 63, 1, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 255, 0, 0, 0, 0, 127, 224, 0, 0, 0, 62, 124, 0, 0, 0, 47, 15, 192, 0, 0, 15, 64, 244, 0, 0, 15, 192, 47, 0, 0, 7, 192, 3, 224, 0, 2, 208, 0, 124, 0, 0, 7, 129, 208, 0, 0, 1, 240, 184, 0, 0, 0, 124, 46, 0, 0, 0, 31, 11, 128, 0, 0, 7, 194, 224, 0, 0, 1, 240, 184, 0, 0, 0, 124, 46, 0, 0, 0, 31, 11, 128, 0, 0, 7, 129, 208, 0, 0, 46, 0, 7, 192, 0, 7, 192, 3, 224, 0, 0, 252, 2, 240, 0, 0, 15, 64, 244, 0, 0, 2, 240, 252, 0, 0, 0, 62, 124, 0, 0, 0, 7, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 15, 64, 0, 0, 1, 64, 0, 0, 0, 15, 240, 0, 0, 0, 15, 252, 1, 1, 144, 3, 244, 15, 225, 252, 0, 252, 31, 248, 127, 0, 63, 255, 240, 6, 0, 11, 255, 224, 0, 0, 0, 127, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 255, 255, 224, 0, 47, 255, 255, 255, 128, 31, 255, 255, 255, 248, 11, 208, 111, 144, 191, 3, 240, 255, 254, 15, 192, 252, 63, 95, 195, 240, 47, 207, 199, 240, 252, 3, 255, 255, 252, 63, 0, 47, 255, 254, 15, 192, 0, 0, 6, 240, 0, 0, 6, 255, 252, 0, 6, 255, 255, 255, 0, 63, 255, 255, 252, 0, 15, 255, 244, 127, 0, 3, 255, 255, 255, 192, 0, 6, 255, 255, 255, 0, 0, 0, 111, 255, 192, 0, 0, 0, 6, 240, 1, 85, 85, 85, 84, 0, 255, 255, 255, 255, 0, 63, 255, 255, 255, 192, 15, 213, 189, 87, 240, 3, 240, 31, 0, 252, 0, 254, 175, 245, 191, 0, 47, 255, 255, 255, 192, 2, 255, 223, 255, 192, 0, 1, 0, 26, 64, 0, 1, 170, 170, 64, 0, 15, 255, 255, 255, 0, 15, 255, 255, 255, 240, 3, 249, 0, 6, 252, 0, 252, 0, 0, 63, 64, 63, 128, 0, 31, 192, 15, 244, 0, 31, 240, 0, 189, 0, 7, 240, 0, 1, 0, 0, 64, 0, 21, 85, 85, 85, 64, 15, 255, 255, 255, 240, 3, 255, 255, 255, 252, 0, 253, 85, 85, 127, 0, 63, 0, 0, 15, 192, 15, 249, 85, 111, 240, 2, 255, 255, 255, 248, 0, 47, 255, 255, 252, 0, 0, 85, 85, 80, 0, 0, 0, 0, 0, 0, 3, 255, 255, 255, 252, 0, 255, 255, 255, 255, 0, 63, 255, 255, 255, 192, 15, 192, 190, 3, 240, 3, 240, 47, 128, 252, 0, 252, 11, 224, 63, 0, 63, 1, 244, 15, 192, 0, 0, 0, 0, 0, 1, 85, 85, 85, 84, 0, 255, 255, 255, 255, 0, 63, 255, 255, 255, 192, 15, 213, 255, 85, 80, 3, 240, 47, 128, 0, 0, 252, 11, 224, 0, 0, 63, 2, 248, 0, 0, 15, 192, 126, 0, 0, 1, 80, 0, 0, 0, 0, 1, 170, 170, 64, 0, 15, 255, 255, 255, 0, 15, 255, 255, 255, 240, 3, 249, 0, 6, 252, 0, 252, 2, 144, 63, 0, 63, 128, 254, 191, 192, 15, 244, 63, 255, 240, 0, 189, 15, 255, 252, 0, 1, 0, 0, 0, 0, 21, 85, 85, 85, 64, 15, 255, 255, 255, 240, 3, 255, 255, 255, 252, 0, 106, 175, 234, 170, 0, 0, 3, 244, 0, 0, 6, 170, 254, 170, 160, 3, 255, 255, 255, 252, 0, 255, 255, 255, 255, 0, 5, 85, 85, 85, 64, 0, 0, 0, 0, 0, 3, 240, 0, 0, 252, 0, 252, 0, 0, 63, 0, 63, 255, 255, 255, 192, 15, 255, 255, 255, 240, 3, 255, 255, 255, 252, 0, 252, 0, 0, 63, 0, 63, 0, 0, 15, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 15, 192, 0, 0, 0, 3, 240, 2, 224, 0, 0, 252, 0, 253, 85, 86, 255, 0, 63, 255, 255, 255, 64, 15, 255, 255, 255, 64, 1, 85, 85, 84, 0, 0, 85, 85, 85, 85, 0, 63, 255, 255, 255, 192, 15, 255, 255, 255, 240, 1, 85, 255, 229, 84, 0, 2, 255, 255, 128, 0, 31, 255, 191, 255, 64, 15, 253, 0, 255, 240, 3, 224, 0, 2, 252, 0, 64, 0, 0, 7, 0, 21, 85, 85, 85, 64, 15, 255, 255, 255, 240, 3, 255, 255, 255, 252, 0, 85, 85, 85, 127, 0, 0, 0, 0, 15, 192, 0, 0, 0, 3, 240, 0, 0, 0, 0, 252, 0, 0, 0, 0, 63, 0, 0, 0, 0, 5, 64, 10, 170, 170, 170, 160, 3, 255, 255, 255, 252, 0, 255, 255, 255, 255, 0, 27, 255, 254, 0, 0, 0, 11, 255, 252, 0, 0, 191, 255, 224, 0, 0, 255, 255, 255, 255, 0, 63, 255, 255, 255, 192, 10, 170, 170, 170, 160, 1, 85, 85, 85, 84, 0, 255, 255, 255, 255, 0, 63, 255, 255, 255, 192, 15, 255, 254, 0, 0, 0, 47, 255, 254, 0, 0, 0, 31, 255, 254, 0, 63, 255, 255, 255, 192, 15, 255, 255, 255, 240, 1, 85, 85, 85, 84, 0, 1, 170, 170, 64, 0, 11, 255, 255, 255, 0, 11, 255, 255, 255, 240, 3, 249, 0, 6, 252, 0, 252, 0, 0, 63, 64, 63, 144, 0, 111, 192, 11, 255, 255, 255, 240, 0, 191, 255, 255, 240, 0, 1, 170, 170, 64, 0, 21, 85, 85, 85, 64, 15, 255, 255, 255, 240, 3, 255, 255, 255, 252, 0, 253, 86, 253, 85, 0, 63, 0, 191, 0, 0, 15, 244, 191, 128, 0, 1, 255, 255, 208, 0, 0, 47, 255, 208, 0, 0, 0, 110, 64, 0, 0, 0, 26, 170, 148, 0, 0, 191, 255, 255, 224, 0, 191, 255, 255, 254, 0, 63, 144, 0, 111, 192, 15, 192, 0, 3, 253, 3, 249, 0, 6, 255, 224, 191, 255, 255, 255, 248, 11, 255, 255, 254, 10, 0, 26, 170, 164, 0, 1, 85, 85, 85, 84, 0, 255, 255, 255, 255, 0, 63, 255, 255, 255, 192, 15, 234, 175, 234, 160, 3, 244, 11, 255, 64, 0, 255, 91, 255, 254, 0, 47, 255, 250, 255, 192, 2, 255, 248, 7, 240, 0, 6, 144, 0, 28, 0, 1, 64, 0, 64, 0, 15, 255, 64, 127, 0, 15, 255, 244, 31, 240, 3, 250, 255, 1, 252, 0, 252, 15, 240, 63, 64, 63, 129, 255, 111, 192, 15, 244, 47, 255, 240, 0, 189, 2, 255, 240, 0, 0, 0, 6, 64, 0, 63, 0, 0, 0, 0, 15, 192, 0, 0, 0, 3, 240, 0, 0, 0, 0, 255, 255, 255, 255, 0, 63, 255, 255, 255, 192, 15, 255, 255, 255, 240, 3, 240, 0, 0, 0, 0, 252, 0, 0, 0, 0, 63, 0, 0, 0, 0, 10, 170, 170, 169, 0, 3, 255, 255, 255, 240, 0, 255, 255, 255, 255, 0, 0, 0, 0, 31, 192, 0, 0, 0, 3, 244, 0, 0, 0, 1, 252, 0, 255, 255, 255, 255, 0, 63, 255, 255, 255, 0, 10, 170, 170, 169, 0, 3, 228, 0, 0, 0, 0, 255, 254, 64, 0, 0, 63, 255, 255, 228, 0, 0, 111, 255, 255, 240, 0, 0, 6, 255, 252, 0, 6, 191, 255, 255, 0, 63, 255, 255, 228, 0, 15, 255, 228, 0, 0, 3, 228, 0, 0, 0, 0, 255, 234, 80, 0, 0, 63, 255, 255, 255, 192, 15, 255, 255, 255, 240, 0, 0, 127, 255, 248, 0, 3, 255, 254, 0, 0, 0, 7, 255, 255, 128, 11, 255, 255, 255, 240, 3, 255, 255, 255, 252, 0, 255, 234, 64, 0, 0, 36, 0, 0, 1, 128, 15, 244, 0, 31, 240, 3, 255, 245, 255, 252, 0, 191, 255, 255, 254, 0, 0, 191, 255, 224, 0, 6, 255, 255, 255, 224, 3, 255, 245, 255, 252, 0, 255, 64, 1, 255, 0, 36, 0, 0, 1, 128, 14, 64, 0, 0, 0, 3, 254, 64, 0, 0, 0, 255, 254, 64, 0, 0, 27, 255, 255, 255, 192, 0, 11, 255, 255, 240, 0, 191, 255, 255, 252, 0, 255, 254, 64, 0, 0, 63, 228, 0, 0, 0, 14, 64, 0, 0, 0, 2, 160, 0, 0, 28, 0, 252, 0, 1, 255, 0, 63, 0, 11, 255, 192, 15, 192, 191, 255, 240, 3, 251, 255, 254, 252, 0, 255, 255, 224, 63, 0, 63, 254, 0, 15, 192, 15, 224, 0, 3, 240, 2, 64, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 170, 170, 170, 170, 170, 255, 255, 255, 255, 255, 250, 170, 170, 170, 170, 252, 0, 0, 0, 0, 61, 0, 0, 0, 0, 1, 224, 0, 0, 0, 0, 63, 224, 0, 0, 0, 2, 255, 224, 0, 0, 0, 6, 255, 224, 0, 0, 0, 7, 255, 224, 0, 0, 0, 7, 255, 208, 0, 0, 0, 7, 255, 208, 0, 0, 0, 7, 255, 0, 0, 0, 0, 7, 192, 0, 0, 0, 0, 12, 0, 0, 0, 0, 63, 170, 170, 170, 170, 175, 255, 255, 255, 255, 255, 234, 170, 170, 170, 170, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 2, 255, 64, 0, 0, 15, 253, 0, 0, 0, 3, 240, 0, 0, 0, 0, 255, 208, 0, 0, 0, 2, 255, 64, 0, 0, 0, 7, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 3, 192, 0, 0, 0, 0, 240, 0, 0, 0, 0, 60, 0, 0, 0, 0, 15, 0, 0, 0, 0, 3, 192, 0, 0, 0, 0, 240, 0, 0, 0, 0, 60, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 2, 244, 0, 0, 0, 0, 191, 192, 0, 0, 0, 11, 240, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 60, 63, 248, 0, 0, 63, 111, 255, 0, 0, 15, 207, 203, 208, 0, 7, 227, 210, 240, 0, 0, 253, 253, 252, 0, 0, 63, 255, 255, 0, 0, 3, 255, 255, 192, 0, 0, 21, 85, 80, 1, 85, 85, 85, 84, 0, 255, 255, 255, 255, 0, 63, 255, 255, 255, 192, 5, 87, 249, 91, 240, 0, 0, 248, 0, 188, 0, 0, 127, 0, 63, 64, 0, 15, 255, 255, 192, 0, 1, 255, 255, 208, 0, 0, 6, 170, 64, 0, 0, 0, 106, 64, 0, 0, 2, 255, 254, 0, 0, 2, 255, 255, 224, 0, 0, 254, 70, 252, 0, 0, 126, 0, 47, 0, 0, 15, 192, 15, 192, 0, 3, 248, 11, 240, 0, 0, 124, 0, 244, 0, 0, 1, 0, 16, 0, 0, 0, 106, 164, 0, 0, 1, 255, 255, 208, 0, 0, 255, 255, 252, 0, 0, 127, 0, 63, 64, 0, 15, 128, 11, 192, 5, 87, 249, 91, 240, 3, 255, 255, 255, 252, 0, 255, 255, 255, 255, 0, 21, 85, 85, 85, 64, 0, 0, 6, 164, 0, 0, 0, 47, 255, 224, 0, 0, 47, 255, 254, 0, 0, 15, 219, 159, 192, 0, 7, 226, 211, 244, 0, 0, 252, 180, 252, 0, 0, 63, 253, 191, 0, 0, 3, 255, 79, 64, 0, 0, 10, 193, 0, 0, 0, 84, 0, 0, 0, 0, 63, 0, 0, 0, 1, 175, 234, 170, 128, 7, 255, 255, 255, 240, 3, 255, 255, 255, 252, 0, 253, 63, 0, 0, 0, 63, 15, 192, 0, 0, 15, 192, 0, 0, 0, 2, 160, 0, 0, 0, 0, 0, 1, 170, 128, 8, 0, 7, 255, 255, 31, 192, 3, 255, 255, 243, 240, 1, 252, 0, 252, 124, 0, 62, 0, 63, 31, 0, 15, 229, 111, 223, 192, 3, 255, 255, 255, 240, 0, 255, 255, 255, 240, 0, 21, 85, 85, 0, 21, 85, 85, 85, 64, 15, 255, 255, 255, 240, 3, 255, 255, 255, 252, 0, 85, 127, 149, 85, 0, 0, 15, 128, 0, 0, 0, 7, 240, 0, 0, 0, 0, 255, 255, 252, 0, 0, 47, 255, 255, 0, 0, 0, 106, 170, 128, 0, 0, 0, 0, 0, 0, 0, 164, 0, 168, 0, 0, 63, 0, 63, 0, 47, 15, 255, 255, 192, 15, 227, 255, 255, 240, 2, 240, 255, 255, 252, 0, 0, 0, 0, 63, 0, 0, 0, 0, 6, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 15, 192, 0, 15, 192, 3, 240, 0, 3, 241, 224, 254, 170, 171, 252, 254, 63, 255, 255, 255, 63, 79, 255, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 85, 85, 85, 0, 63, 255, 255, 255, 192, 15, 255, 255, 255, 240, 1, 85, 87, 254, 84, 0, 0, 11, 255, 244, 0, 0, 15, 255, 255, 192, 0, 3, 240, 31, 240, 0, 0, 208, 0, 124, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 3, 240, 0, 0, 0, 0, 253, 85, 85, 85, 0, 63, 255, 255, 255, 192, 15, 255, 255, 255, 240, 0, 85, 85, 85, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 255, 255, 240, 0, 0, 255, 255, 252, 0, 0, 63, 255, 255, 0, 0, 15, 234, 170, 128, 0, 3, 255, 255, 240, 0, 0, 190, 170, 168, 0, 0, 63, 255, 255, 0, 0, 15, 255, 255, 192, 0, 2, 255, 255, 240, 0, 0, 85, 85, 84, 0, 0, 63, 255, 255, 0, 0, 15, 255, 255, 192, 0, 3, 249, 85, 80, 0, 0, 248, 0, 0, 0, 0, 127, 0, 0, 0, 0, 15, 255, 255, 192, 0, 2, 255, 255, 240, 0, 0, 6, 170, 168, 0, 0, 0, 106, 64, 0, 0, 2, 255, 254, 0, 0, 2, 255, 255, 224, 0, 0, 254, 2, 252, 0, 0, 126, 0, 47, 64, 0, 15, 224, 47, 192, 0, 2, 255, 255, 224, 0, 0, 47, 255, 224, 0, 0, 0, 106, 64, 0, 0, 5, 85, 85, 85, 64, 3, 255, 255, 255, 240, 0, 255, 255, 255, 252, 0, 63, 149, 191, 85, 0, 15, 128, 11, 192, 0, 7, 240, 3, 244, 0, 0, 255, 255, 252, 0, 0, 31, 255, 253, 0, 0, 0, 106, 164, 0, 0, 0, 26, 169, 0, 0, 0, 127, 255, 244, 0, 0, 63, 255, 255, 0, 0, 31, 192, 15, 208, 0, 3, 224, 2, 240, 0, 0, 254, 86, 253, 84, 0, 63, 255, 255, 255, 0, 15, 255, 255, 255, 192, 1, 85, 85, 85, 80, 0, 0, 0, 0, 0, 0, 63, 255, 255, 0, 0, 15, 255, 255, 192, 0, 2, 253, 85, 80, 0, 0, 248, 0, 0, 0, 0, 127, 0, 0, 0, 0, 15, 224, 0, 0, 0, 2, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 248, 30, 0, 0, 3, 255, 199, 240, 0, 0, 255, 244, 252, 0, 0, 124, 63, 15, 64, 0, 15, 207, 255, 192, 0, 3, 240, 255, 240, 0, 0, 28, 15, 240, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 3, 240, 0, 0, 0, 21, 253, 85, 0, 0, 15, 255, 255, 253, 0, 3, 255, 255, 255, 192, 0, 87, 245, 87, 240, 0, 0, 252, 0, 252, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 2, 170, 169, 0, 0, 0, 255, 255, 240, 0, 0, 63, 255, 254, 0, 0, 0, 0, 47, 192, 0, 0, 0, 3, 244, 0, 0, 0, 1, 252, 0, 0, 63, 255, 255, 0, 0, 15, 255, 255, 0, 0, 2, 170, 164, 0, 0, 0, 224, 0, 0, 0, 0, 63, 244, 0, 0, 0, 15, 255, 249, 0, 0, 0, 127, 255, 240, 0, 0, 0, 47, 252, 0, 0, 2, 255, 255, 0, 0, 15, 255, 249, 0, 0, 3, 255, 64, 0, 0, 0, 224, 0, 0, 0, 0, 63, 144, 0, 0, 0, 15, 255, 254, 64, 0, 3, 255, 255, 240, 0, 0, 2, 255, 252, 0, 0, 47, 255, 240, 0, 0, 0, 111, 255, 192, 0, 2, 255, 255, 240, 0, 0, 255, 255, 228, 0, 0, 63, 144, 0, 0, 0, 0, 0, 0, 64, 0, 3, 208, 2, 240, 0, 0, 255, 139, 252, 0, 0, 47, 255, 254, 0, 0, 0, 191, 244, 0, 0, 2, 255, 255, 224, 0, 0, 255, 75, 252, 0, 0, 61, 0, 47, 0, 0, 4, 0, 0, 64, 0, 3, 128, 0, 0, 0, 0, 255, 144, 0, 0, 0, 63, 255, 228, 6, 0, 1, 191, 255, 255, 192, 0, 0, 127, 255, 240, 0, 7, 255, 255, 224, 0, 63, 255, 248, 0, 0, 15, 254, 0, 0, 0, 3, 128, 0, 0, 0, 0, 0, 0, 4, 0, 0, 63, 0, 31, 0, 0, 15, 192, 191, 192, 0, 3, 242, 255, 240, 0, 0, 255, 255, 252, 0, 0, 63, 253, 63, 0, 0, 15, 244, 15, 192, 0, 3, 208, 3, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 224, 0, 0, 21, 6, 253, 1, 80, 255, 255, 255, 255, 255, 255, 255, 244, 191, 255, 253, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 170, 170, 170, 170, 169, 255, 255, 255, 255, 255, 234, 170, 170, 170, 170, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 63, 255, 255, 75, 255, 255, 255, 255, 255, 255, 255, 193, 80, 111, 208, 85, 0, 0, 3, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 128, 0, 0, 0, 11, 192, 0, 0, 0, 2, 224, 0, 0, 0, 0, 124, 0, 0, 0, 0, 15, 0, 0, 0, 0, 3, 224, 0, 0, 0, 0, 188, 0, 0, 0, 0, 62, 0, 0, 0, 0, 31, 0, 0, };

static const unsigned char fontWidths[] = { 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 0, };

/*JSON{
  "type" : "method",
  "class" : "Graphics",
  "name" : "setFontMonofonto18",
  "generate" : "jswrap_graphics_setFontMonofonto18",
  "params" : [
    ["scale","int","[optional] If >1 the font will be scaled up by that amount"]
  ],
  "return" : ["JsVar","The instance of Graphics this was called on, to allow call chaining"],
  "return_object" : "Graphics"
}
Set the current font to Monofonto 18 (2 bpp, cap height = 17 px, total height = 21 px)
*/
JsVar *jswrap_graphics_setFontMonofonto18(JsVar *parent, int scale) {
  if (scale<1) scale=1;
  JsVar *bitmap = jsvNewNativeString(fontBitmap, sizeof(fontBitmap));
  JsVar *widths = jsvNewNativeString(fontWidths, sizeof(fontWidths));
  JsVar *r = jswrap_graphics_setFontCustom(parent, bitmap, 32, widths, 21 + (scale<<8) + (2<<16)); // 4 bit
  jsvUnLock2(bitmap, widths);
  return r;
}
