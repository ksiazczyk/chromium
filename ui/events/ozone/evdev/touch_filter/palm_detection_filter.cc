// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PalmDetectionFilter base class implementation
// summary: Implements the PalmDetectionFilter base class constructor and destructor that store the shared palm detection state.
// ---

#include "ui/events/ozone/evdev/touch_filter/palm_detection_filter.h"

namespace ui {

PalmDetectionFilter::PalmDetectionFilter(
    SharedPalmDetectionFilterState* shared_palm_state)
    : shared_palm_state_(shared_palm_state) {
  DCHECK(shared_palm_state != nullptr);
}

PalmDetectionFilter::~PalmDetectionFilter() {}

}  // namespace ui
