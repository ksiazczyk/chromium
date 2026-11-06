// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock security delegate implementation
// summary: Provides the constructor and destructor for the MockSecurityDelegate gmock stub used in Exo tests.
// ---

#include "components/exo/test/mock_security_delegate.h"

namespace exo::test {

MockSecurityDelegate::MockSecurityDelegate() = default;
MockSecurityDelegate::~MockSecurityDelegate() = default;

}  // namespace exo::test
