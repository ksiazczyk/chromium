// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock context delegate implementation
// summary: Implements the constructor and destructor of the MockContextDelegate test double.
// ---

#include "components/enterprise/client_certificates/core/mock_context_delegate.h"

namespace client_certificates {

MockContextDelegate::MockContextDelegate() = default;
MockContextDelegate::~MockContextDelegate() = default;

}  // namespace client_certificates
