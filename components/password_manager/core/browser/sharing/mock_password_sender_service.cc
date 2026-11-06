// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock password sender service implementation
// summary: Provides the constructor and destructor for the MockPasswordSenderService test double used in tests.
// ---

#include "components/password_manager/core/browser/sharing/mock_password_sender_service.h"

#include "components/password_manager/core/browser/password_form.h"

namespace password_manager {

MockPasswordSenderService::MockPasswordSenderService() = default;

MockPasswordSenderService::~MockPasswordSenderService() = default;

}  // namespace password_manager
