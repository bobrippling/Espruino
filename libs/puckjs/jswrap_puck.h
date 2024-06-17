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
 * Contains JavaScript interface for Puck.js
 * ----------------------------------------------------------------------------
 */
#include "jspin.h"


typedef enum {
  PUCKJS_UNKNOWN, // Maybe some I2C failure?
  PUCKJS_1V0, // MAG3110 magnetometer
  PUCKJS_2V0, // LIS3MDLTR magnetometer, LSM6DS3TR-C accel/gyro, PCT2075TP temperature
  PUCKJS_2V1, // MMC5603NJ magnetometer, LSM6DS3TR-C accel/gyro, PCT2075TP temperature
  PUCKJS_LITE_1V0, // R+G LED
} PuckVersion;

PuckVersion puckVersion;

#define PUCKJS_HAS_LED3 (puckVersion==PUCKJS_1V0 || puckVersion==PUCKJS_2V0 || puckVersion==PUCKJS_2V1)
#define PUCKJS_HAS_MAG (puckVersion==PUCKJS_1V0 || puckVersion==PUCKJS_2V0 || puckVersion==PUCKJS_2V1)
#define PUCKJS_HAS_IR (puckVersion==PUCKJS_1V0 || puckVersion==PUCKJS_2V0 || puckVersion==PUCKJS_2V1)
#define PUCKJS_HAS_IR_FET (puckVersion==PUCKJS_2V0 || puckVersion==PUCKJS_2V1)
#define PUCKJS_HAS_CAPSENSE (puckVersion==PUCKJS_1V0 || puckVersion==PUCKJS_2V0 || puckVersion==PUCKJS_2V1)
#define PUCKJS_HAS_ACCEL (puckVersion==PUCKJS_2V0 || puckVersion==PUCKJS_2V1)
#define PUCKJS_HAS_TEMP_SENSOR (puckVersion==PUCKJS_2V0 || puckVersion==PUCKJS_2V1)

JsVar *jswrap_puck_getHardwareVersion(void);

void jswrap_puck_magOn(void);
void jswrap_puck_magOff(void);
JsVar *jswrap_puck_mag(void);
JsVarFloat jswrap_puck_magTemp(void);
void jswrap_puck_magWr(JsVarInt reg, JsVarInt data);
int jswrap_puck_magRd(JsVarInt reg);
JsVarFloat jswrap_puck_getTemperature(void);

void jswrap_puck_accelOn(JsVarFloat hz);
void jswrap_puck_accelOff(void);
JsVar *jswrap_puck_accel(void);
void jswrap_puck_accelWr(JsVarInt reg, JsVarInt data);
int jswrap_puck_accelRd(JsVarInt reg);

void jswrap_puck_IR(JsVar *data, Pin cathode, Pin anode);
int jswrap_puck_capSense(Pin tx, Pin rx);
JsVarFloat jswrap_puck_light(void);
JsVarInt jswrap_puck_getBattery(void);
bool jswrap_puck_selfTest(void);

void jswrap_puck_init(void);
void jswrap_puck_kill(void);
bool jswrap_puck_idle(void);
void jswrap_puck_powerusage(JsVar *devices);