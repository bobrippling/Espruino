/*
 * This file is part of Espruino, a JavaScript interpreter for Microcontrollers
 *
 * Copyright (C) 2016 Gordon Williams <gw@pur3.co.uk>
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * ----------------------------------------------------------------------------
 * Contains JavaScript interface for Jolt.js
 * ----------------------------------------------------------------------------
 */
#include "jspin.h"

JsVar *jswrap_jolt_q0(void);
JsVar *jswrap_jolt_q1(void);
JsVar *jswrap_jolt_q2(void);
JsVar *jswrap_jolt_q3(void);
void jswrap_jolt_setDriverMode(int driver, JsVar *mode);

bool jswrap_jolt_selfTest(void);

void jswrap_jolt_hwinit(void);
void jswrap_jolt_init(void);
void jswrap_jolt_kill(void);
bool jswrap_jolt_idle(void);
void jswrap_jolt_powerusage(JsVar *devices);