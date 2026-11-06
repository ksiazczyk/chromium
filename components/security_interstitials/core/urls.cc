// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Security interstitial URL constants
// summary: Defines constants for the Safe Browsing privacy policy URL, whitepaper URL and enterprise interstitial help link used by interstitial pages.
// ---

#include "components/security_interstitials/core/urls.h"

namespace security_interstitials {

const char kSafeBrowsingPrivacyPolicyUrl[] =
    "https://www.google.com/chrome/browser/privacy/#safe-browsing-policies";
const char kSafeBrowsingWhitePaperUrl[] =
    "https://www.google.com/chrome/browser/privacy/"
    "whitepaper.html#extendedreport";

const char kEnterpriseInterstitialHelpLink[] =
    "https://support.google.com/chrome/a/?p=block_warn";

}  // namespace security_interstitials
