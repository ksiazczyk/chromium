// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock private key factory implementation
// summary: Implements the constructor and destructor of the MockPrivateKeyFactory test double used in unit tests.
// ---

#include "components/enterprise/client_certificates/core/mock_private_key_factory.h"

namespace client_certificates {

MockPrivateKeyFactory::MockPrivateKeyFactory() = default;

MockPrivateKeyFactory::~MockPrivateKeyFactory() = default;

}  // namespace client_certificates
