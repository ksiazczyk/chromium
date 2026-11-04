// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock latency info swap promise monitor implementation
// summary: Implements constructors and the destructor for MockLatencyInfoSwapPromiseMonitor used in latency-related compositor tests.
// ---

#include "cc/test/mock_latency_info_swap_promise_monitor.h"

namespace cc {

MockLatencyInfoSwapPromiseMonitor::MockLatencyInfoSwapPromiseMonitor(
    SwapPromiseManager* swap_promise_manager)
    : LatencyInfoSwapPromiseMonitor(&latency_info_, swap_promise_manager) {}

MockLatencyInfoSwapPromiseMonitor::MockLatencyInfoSwapPromiseMonitor(
    LayerTreeHostImpl* host_impl)
    : LatencyInfoSwapPromiseMonitor(&latency_info_, host_impl) {}

MockLatencyInfoSwapPromiseMonitor::~MockLatencyInfoSwapPromiseMonitor() =
    default;

}  // namespace cc
