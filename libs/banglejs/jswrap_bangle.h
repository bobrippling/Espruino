/*
 * This file is part of Espruino, a JavaScript interpreter for Microcontrollers
 *
 * Copyright (C) 2019 Gordon Williams <gw@pur3.co.uk>
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * ----------------------------------------------------------------------------
 * Contains JavaScript interface for Bangle.js (http://www.espruino.com/Bangle.js)
 * ----------------------------------------------------------------------------
 */
#include "jspin.h"

void jswrap_banglejs_lcdWr(JsVarInt cmd, JsVar *data);
void jswrap_banglejs_setLCDPower(bool isOn);
void jswrap_banglejs_setLCDPowerBacklight(bool isOn);
void jswrap_banglejs_setLCDBrightness(JsVarFloat v);
void jswrap_banglejs_setLCDMode(JsVar *mode);
JsVar *jswrap_banglejs_getLCDMode(void);
void jswrap_banglejs_setLCDOffset(int y);
void jswrap_banglejs_setLCDOverlay(JsVar *imgVar, JsVar *xv, int y, JsVar *options);
void jswrap_banglejs_setLCDTimeout(JsVarFloat timeout);
int jswrap_banglejs_isLCDOn(void);
int jswrap_banglejs_isBacklightOn(void);
void jswrap_banglejs_setLocked(bool isLocked);
int jswrap_banglejs_isLocked(void);

void jswrap_banglejs_setPollInterval(JsVarFloat interval);
void jswrap_banglejs_setOptions(JsVar *options);
JsVar *jswrap_banglejs_getOptions(void);
int jswrap_banglejs_isCharging(void);
JsVarInt jswrap_banglejs_getBattery(void);

bool jswrap_banglejs_setHRMPower(bool isOn, JsVar *appId);
int jswrap_banglejs_isHRMOn(void);
bool jswrap_banglejs_setGPSPower(bool isOn, JsVar *appId);
int jswrap_banglejs_isGPSOn(void);
JsVar *jswrap_banglejs_getGPSFix(void);
bool jswrap_banglejs_setCompassPower(bool isOn, JsVar *appId);
int jswrap_banglejs_isCompassOn(void);
void jswrap_banglejs_resetCompass(void);
bool jswrap_banglejs_setBarometerPower(bool isOn, JsVar *appId);
int jswrap_banglejs_isBarometerOn(void);

int jswrap_banglejs_getStepCount(void);
void jswrap_banglejs_setStepCount(JsVarInt count);

JsVar *jswrap_banglejs_getCompass(void);
JsVar *jswrap_banglejs_getAccel(void);
JsVar *jswrap_banglejs_getPressure(void);
JsVar *jswrap_banglejs_getHealthStatus(void);

JsVar *jswrap_banglejs_dbg(void);
void jswrap_banglejs_accelWr(JsVarInt reg, JsVarInt data);
JsVar *jswrap_banglejs_accelRd(JsVarInt reg, JsVarInt cnt);
void jswrap_banglejs_barometerWr(JsVarInt reg, JsVarInt data);
JsVar *jswrap_banglejs_barometerRd(JsVarInt reg, JsVarInt cnt);
void jswrap_banglejs_compassWr(JsVarInt reg, JsVarInt data);
JsVar *jswrap_banglejs_compassRd(JsVarInt reg, JsVarInt cnt);
void jswrap_banglejs_hrmWr(JsVarInt reg, JsVarInt data);
JsVar *jswrap_banglejs_hrmRd(JsVarInt reg, JsVarInt cnt);
void jswrap_banglejs_ioWr(JsVarInt mask, bool on);

JsVar *jswrap_banglejs_project(JsVar *latlong);
void jswrap_banglejs_beep_callback(void); // internal use only
JsVar *jswrap_banglejs_beep(int time, int freq);
void jswrap_banglejs_buzz_callback(void); // internal use only
JsVar *jswrap_banglejs_buzz(int time, JsVarFloat amt);


void jswrap_banglejs_off(void);
void jswrap_banglejs_softOff(void);
JsVar *jswrap_banglejs_getLogo(void);
void jswrap_banglejs_factoryReset(bool noReboot);

JsVar *jswrap_banglejs_appRect(void);

void jswrap_banglejs_hwinit(void);
void jswrap_banglejs_init(void);
void jswrap_banglejs_kill(void);
bool jswrap_banglejs_idle(void);
bool jswrap_banglejs_gps_character(char ch);

/* If we're busy and really don't want to be interrupted (eg clearing flash memory)
 then we should *NOT* allow the home button to set EXEC_INTERRUPTED (which happens
 if it was held, JSBT_RESET was set, and then 0.5s later it wasn't handled).
 */
void jswrap_banglejs_kickPollWatchdog(void);

#ifdef EMULATED
extern void touchHandlerInternal(int tx, int ty, int pts, int gesture);
#endif

// Used when pushing events/retrieving events from the event queue
typedef enum {
  JSBE_HRM_ENV, // new HRM environment reading
} JsBangleEvent;

/// Called from jsinteractive when an event is parsed from the event queue for Bangle.js (executed outside IRQ)
void jsbangle_exec_pending(IOEvent *event);
/// queue an event for Bangle.js (usually called from inside an IRQ)
void jsbangle_push_event(JsBangleEvent type, uint16_t value);

void jswrap_banglejs_powerusage(JsVar *devices);
