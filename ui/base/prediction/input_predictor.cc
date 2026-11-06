// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: InputPredictor base class implementation
// summary: Implements default resample-latency behavior for the InputPredictor base class, returning zero offset and no internal latency handling.
// ---

#include "ui/base/prediction/input_predictor.h"

namespace ui {

base::TimeDelta InputPredictor::ResampleLatency(
    base::TimeDelta frame_interval) const {
  // Default implementation returns zero, indicating no resampling offset.
  return base::TimeDelta();
}

bool InputPredictor::AppliesResampleLatencyInternally() const {
  return false;
}

}  // namespace ui
