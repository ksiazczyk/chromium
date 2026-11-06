// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MockRealm implementation for fuchsia.component Realm tests
// summary: Implements MockRealm, a test double that binds fuchsia.component/Realm into an outgoing directory and fails tests on unimplemented calls.
// ---

#include "components/fuchsia_component_support/mock_realm.h"

#include "testing/gtest/include/gtest/gtest.h"

namespace fuchsia_component_support {

MockRealm::MockRealm(sys::OutgoingDirectory* outgoing)
    : binding_(outgoing, this) {}

MockRealm::~MockRealm() = default;

void MockRealm::NotImplemented_(const std::string& name) {
  ADD_FAILURE() << "NotImplemented_: " << name;
}

}  // namespace fuchsia_component_support
