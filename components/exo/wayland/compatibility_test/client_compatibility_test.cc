// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: ClientCompatibilityTest implementation
// summary: Implements the constructor and destructor of the ClientCompatibilityTest fixture used as the base for Wayland client compatibility tests.
// ---

#include "components/exo/wayland/compatibility_test/client_compatibility_test.h"

namespace exo {
namespace wayland {
namespace compatibility {
namespace test {

ClientCompatibilityTest::ClientCompatibilityTest() = default;
ClientCompatibilityTest::~ClientCompatibilityTest() = default;

}  // namespace test
}  // namespace compatibility
}  // namespace wayland
}  // namespace exo