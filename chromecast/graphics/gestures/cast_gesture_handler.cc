// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cast gesture handler default implementation
// summary: Default implementation of the CastGestureHandler interface whose CanHandleSwipe always returns false.
// ---

#include "chromecast/graphics/gestures/cast_gesture_handler.h"

namespace chromecast {

bool CastGestureHandler::CanHandleSwipe(CastSideSwipeOrigin swipe_origin) {
  return false;
}

}  // namespace chromecast
