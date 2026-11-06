// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScrollInputType enum
// summary: Defines the ui::ScrollInputType enum classifying scroll input sources as touchscreen, wheel, autoscroll, or scrollbar.
// ---

#ifndef UI_EVENTS_TYPES_SCROLL_INPUT_TYPE_H_
#define UI_EVENTS_TYPES_SCROLL_INPUT_TYPE_H_

namespace ui {

enum class ScrollInputType {
  kTouchscreen = 0,
  kWheel,
  kAutoscroll,
  kScrollbar,
  kMaxValue = kScrollbar,
};

}  // namespace ui

#endif  // UI_EVENTS_TYPES_SCROLL_INPUT_TYPE_H_
