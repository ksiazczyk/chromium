// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MockSignalsCollector implementation
// summary: Defines the constructor and destructor of the MockSignalsCollector gmock test double for device signals tests.
// ---

#include "components/device_signals/core/browser/mock_signals_collector.h"

#include "components/device_signals/core/browser/signals_types.h"

namespace device_signals {

MockSignalsCollector::MockSignalsCollector() = default;
MockSignalsCollector::~MockSignalsCollector() = default;

}  // namespace device_signals
