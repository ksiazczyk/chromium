// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Ambient Ash test helper implementation
// summary: Implements AmbientAshTestHelper by delegating access token issuance and pending-request checks to the test ambient client.
// relations:
//   - implements /ash/ambient/test/ambient_ash_test_helper.h
//   - depends_on /ash/ambient/test/test_ambient_client.h
// ---

#include "ash/ambient/test/ambient_ash_test_helper.h"

#include "ash/ambient/test/test_ambient_client.h"

namespace ash {

AmbientAshTestHelper::AmbientAshTestHelper() = default;

AmbientAshTestHelper::~AmbientAshTestHelper() = default;

void AmbientAshTestHelper::IssueAccessToken(bool is_empty) {
  ambient_client_.IssueAccessToken(is_empty);
}

bool AmbientAshTestHelper::IsAccessTokenRequestPending() const {
  return ambient_client_.IsAccessTokenRequestPending();
}

}  // namespace ash
