// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Gesture timer provider header
// summary: Declares the gesture library timer provider interface, including StimeNow and the kGestureTimerProvider instance.
// ---

#ifndef UI_EVENTS_OZONE_EVDEV_LIBGESTURES_GLUE_GESTURE_TIMER_PROVIDER_H_
#define UI_EVENTS_OZONE_EVDEV_LIBGESTURES_GLUE_GESTURE_TIMER_PROVIDER_H_

#include <gestures/gestures.h>

namespace ui {

stime_t StimeNow();

extern const GesturesTimerProvider kGestureTimerProvider;

}  // namespace ui

#endif  // UI_EVENTS_OZONE_EVDEV_LIBGESTURES_GLUE_GESTURE_TIMER_PROVIDER_H_
