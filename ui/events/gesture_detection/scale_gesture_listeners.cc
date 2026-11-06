// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Simple scale gesture listener implementation
// summary: Implements the no-op SimpleScaleGestureListener convenience class used by subclasses that only need a subset of scale gesture callbacks.
// ---

#include "ui/events/gesture_detection/scale_gesture_listeners.h"

namespace ui {

bool SimpleScaleGestureListener::OnScale(const ScaleGestureDetector&,
                                         const MotionEvent&) {
  return false;
}

bool SimpleScaleGestureListener::OnScaleBegin(const ScaleGestureDetector&,
                                              const MotionEvent&) {
  return true;
}

void SimpleScaleGestureListener::OnScaleEnd(const ScaleGestureDetector&,
                                            const MotionEvent&) {
}

}  // namespace ui
