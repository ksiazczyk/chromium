// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Timing tracker implementation
// summary: Implements TimingTracker, which logs the elapsed time in microseconds between construction and destruction.
// ---

#include "chromecast/common/timing_tracker.h"

#include <string_view>

#include "base/logging.h"

namespace chromecast {

TimingTracker::TimingTracker(std::string_view file,
                             std::string_view measured_tag)
    : file_(file), measured_tag_(measured_tag), start_(base::Time::Now()) {}

TimingTracker::~TimingTracker() {
  auto end = base::Time::Now();
  LOG(INFO) << file_ << " " << measured_tag_
            << " dt us: " << (end - start_).InMicroseconds();
}

}  // namespace chromecast
