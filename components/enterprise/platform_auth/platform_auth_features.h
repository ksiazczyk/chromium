// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Declarations for Okta SSO feature flags
// summary: Declares the Okta SSO base feature and its string parameters for export and use across the platform auth component.
// ---

#ifndef COMPONENTS_ENTERPRISE_PLATFORM_AUTH_PLATFORM_AUTH_FEATURES_H_
#define COMPONENTS_ENTERPRISE_PLATFORM_AUTH_PLATFORM_AUTH_FEATURES_H_

#include "base/component_export.h"
#include "base/feature_list.h"
#include "base/metrics/field_trial_params.h"
#include "build/build_config.h"

namespace enterprise_auth {

COMPONENT_EXPORT(ENTERPRISE_PLATFORM_AUTH) BASE_DECLARE_FEATURE(kOktaSSO);

BASE_DECLARE_FEATURE_PARAM(std::string, kOktaSsoRequestHeadersAllowlist);

BASE_DECLARE_FEATURE_PARAM(std::string, kOktaSsoFixedRequestHeaders);

COMPONENT_EXPORT(ENTERPRISE_PLATFORM_AUTH)
BASE_DECLARE_FEATURE_PARAM(std::string, kOktaSsoURLPattern);

}  // namespace enterprise_auth

#endif  // COMPONENTS_ENTERPRISE_PLATFORM_AUTH_PLATFORM_AUTH_FEATURES_H_
