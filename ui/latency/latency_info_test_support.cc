// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test support for printing LatencyInfo
// summary: Provides a gtest PrintTo helper that writes a LatencyInfo trace id to the test output stream.
// ---

#include "ui/latency/latency_info.h"

#include <ostream>

namespace ui {

void PrintTo(const LatencyInfo& latency, ::std::ostream* os) {
  *os << "LatencyInfo: trace_id=" << latency.trace_id();
}

}  // namespace ui
