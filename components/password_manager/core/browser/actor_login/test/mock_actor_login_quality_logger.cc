// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock ActorLoginQualityLogger implementation
// summary: Defines the default constructor and destructor of the mock actor login quality logger used in tests.
// ---

#include "components/password_manager/core/browser/actor_login/test/mock_actor_login_quality_logger.h"

namespace actor_login {
MockActorLoginQualityLogger::MockActorLoginQualityLogger() = default;
MockActorLoginQualityLogger::~MockActorLoginQualityLogger() = default;
}  // namespace actor_login
