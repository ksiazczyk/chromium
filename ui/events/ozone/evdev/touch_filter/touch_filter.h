// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TouchFilter abstract interface
// summary: Defines the abstract TouchFilter interface for suppressing touch slots during evdev touch event processing.
// ---

#ifndef UI_EVENTS_OZONE_EVDEV_TOUCH_FILTER_TOUCH_FILTER_H_
#define UI_EVENTS_OZONE_EVDEV_TOUCH_FILTER_TOUCH_FILTER_H_

#include <bitset>
#include <vector>

#include "base/time/time.h"
#include "ui/events/ozone/evdev/touch_evdev_types.h"

namespace ui {

class TouchFilter {
 public:
  virtual ~TouchFilter() {}
  virtual void Filter(const std::vector<InProgressTouchEvdev>& touches,
                      base::TimeTicks time,
                      std::bitset<kNumTouchEvdevSlots>* slots_to_suppress) = 0;
};

}  // namespace ui

#endif  // UI_EVENTS_OZONE_EVDEV_TOUCH_FILTER_TOUCH_FILTER_H_
