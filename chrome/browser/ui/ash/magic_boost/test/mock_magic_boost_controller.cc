// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock Magic Boost controller implementation
// summary: Implements the MockMagicBoostController test double with defaulted constructor and destructor for the chromeos namespace.
// ---

#include "chrome/browser/ui/ash/magic_boost/test/mock_magic_boost_controller.h"

namespace chromeos {

MockMagicBoostController::MockMagicBoostController() = default;

MockMagicBoostController::~MockMagicBoostController() = default;

}  // namespace chromeos
