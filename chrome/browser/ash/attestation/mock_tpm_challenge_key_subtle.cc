// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockTpmChallengeKeySubtle implementation
// summary: Implements the constructor and destructor of the MockTpmChallengeKeySubtle test double.
// ---

#include "chrome/browser/ash/attestation/mock_tpm_challenge_key_subtle.h"

namespace ash {
namespace attestation {

MockTpmChallengeKeySubtle::MockTpmChallengeKeySubtle() = default;
MockTpmChallengeKeySubtle::~MockTpmChallengeKeySubtle() = default;

}  // namespace attestation
}  // namespace ash
