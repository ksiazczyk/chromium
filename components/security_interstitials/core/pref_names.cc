// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Security interstitial preference name definitions
// summary: Defines preference name constants for mixed forms warnings and the lookalike domain warning allowlist.
// ---

#include "components/security_interstitials/core/pref_names.h"

namespace prefs {

const char kMixedFormsWarningsEnabled[] = "profile.mixed_forms_warnings";

const char kLookalikeWarningAllowlistDomains[] =
    "profile.lookalike_domain_allowlist";

}  // namespace prefs
