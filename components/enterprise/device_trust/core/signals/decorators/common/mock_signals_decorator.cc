// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MockSignalsDecorator implementation
// summary: Implements the constructor and destructor of the gmock-based MockSignalsDecorator used to fake signal decoration in tests.
// ---

#include "components/enterprise/device_trust/core/signals/decorators/common/mock_signals_decorator.h"

namespace enterprise_connectors::test {

MockSignalsDecorator::MockSignalsDecorator() = default;
MockSignalsDecorator::~MockSignalsDecorator() = default;

}  // namespace enterprise_connectors::test
