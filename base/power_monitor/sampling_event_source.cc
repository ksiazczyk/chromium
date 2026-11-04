// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Sampling event source implementation
// summary: Implements the destructor of the abstract SamplingEventSource interface that invokes a callback when power samples should be requested.
// ---

#include "base/power_monitor/sampling_event_source.h"

namespace base {

SamplingEventSource::~SamplingEventSource() = default;

}  // namespace base
