// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unit tests for the passkey change quota tracker
// summary: Verifies that quota is tracked per relying party including subdomains and that localhost changes are exempt from the quota.
// ---

#include "components/webauthn/core/browser/passkey_change_quota_tracker.h"

#include "testing/gtest/include/gtest/gtest.h"
#include "url/origin.h"

namespace webauthn {

namespace {

TEST(PasskeyChangeQuotaTrackerTest, TrackChangeByRelyingParty) {
  const url::Origin kSite1 =
      url::Origin::CreateFromNormalizedTuple("https", "google.com", 22);
  const url::Origin kSite1Subdomain = url::Origin::CreateFromNormalizedTuple(
      "https", "accounts.google.com", 22);
  const url::Origin kSite2 =
      url::Origin::CreateFromNormalizedTuple("https", "example.com", 22);

  PasskeyChangeQuotaTracker* tracker = PasskeyChangeQuotaTracker::GetInstance();
  for (int i = 0; i < PasskeyChangeQuotaTracker::kMaxTokensPerRP; ++i) {
    EXPECT_TRUE(tracker->CanMakeChange(kSite1));
    EXPECT_TRUE(tracker->CanMakeChange(kSite1Subdomain));
    tracker->TrackChange(kSite1);
  }
  EXPECT_FALSE(tracker->CanMakeChange(kSite1));
  EXPECT_FALSE(tracker->CanMakeChange(kSite1Subdomain));
  EXPECT_TRUE(tracker->CanMakeChange(kSite2));
}

TEST(PasskeyChangeQuotaTrackerTest, TrackChangeIgnoresLocalhost) {
  const url::Origin kLocalhost =
      url::Origin::CreateFromNormalizedTuple("http", "localhost", 22);
  PasskeyChangeQuotaTracker* tracker = PasskeyChangeQuotaTracker::GetInstance();
  for (int i = 0; i < PasskeyChangeQuotaTracker::kMaxTokensPerRP; ++i) {
    tracker->TrackChange(kLocalhost);
  }
  EXPECT_TRUE(tracker->CanMakeChange(kLocalhost));
}

}  // namespace

}  // namespace webauthn
