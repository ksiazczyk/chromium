// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Platform auth feature flag definitions
// summary: Defines base::Feature flags for enterprise authentication, enabling extensible enterprise SSO by default and Ping Identity SSO support by default disabled.
// ---

#include "chrome/browser/enterprise/platform_auth/platform_auth_features.h"

#include "base/feature_list.h"

namespace enterprise_auth {

BASE_FEATURE(kEnableExtensibleEnterpriseSSO, base::FEATURE_ENABLED_BY_DEFAULT);

BASE_FEATURE(kPingSso, base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace enterprise_auth
