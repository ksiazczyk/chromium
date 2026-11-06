// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: URL feature flags implementation
// summary: Defines base::Feature flags governing URL parsing behavior, such as space characters in hosts, IDNA ContextJ rules, and percent-encoded dots, with accessor functions that fall back to defaults before the FeatureList is ready.
// ---

#include "url/url_features.h"
#include "base/feature_list.h"

namespace url {

BASE_FEATURE(kDisallowSpaceCharacterInURLHostParsing,
             base::FEATURE_DISABLED_BY_DEFAULT);

bool IsDisallowingSpaceCharacterInURLHostParsing() {
  // If the FeatureList isn't available yet, fall back to the feature's default
  // state. This may happen during early startup, see crbug.com/1441956.
  if (!base::FeatureList::GetInstance()) {
    return kDisallowSpaceCharacterInURLHostParsing.default_state ==
           base::FEATURE_ENABLED_BY_DEFAULT;
  }
  return base::FeatureList::IsEnabled(kDisallowSpaceCharacterInURLHostParsing);
}

BASE_FEATURE(kUseIDNAContextJRules, base::FEATURE_ENABLED_BY_DEFAULT);

bool IsUsingIDNAContextJRules() {
  // If the FeatureList isn't available yet, fall back to the feature's default
  // state. This may happen during early startup, see crbug.com/1441956.
  if (!base::FeatureList::GetInstance()) {
    return kUseIDNAContextJRules.default_state ==
           base::FEATURE_ENABLED_BY_DEFAULT;
  }
  return base::FeatureList::IsEnabled(kUseIDNAContextJRules);
}

BASE_FEATURE(kNonSpecialLeadingSlashHandling, base::FEATURE_ENABLED_BY_DEFAULT);

bool IsNonSpecialLeadingSlashHandlingEnabled() {
  if (!base::FeatureList::GetInstance()) {
    return kNonSpecialLeadingSlashHandling.default_state ==
           base::FEATURE_ENABLED_BY_DEFAULT;
  }
  return base::FeatureList::IsEnabled(kNonSpecialLeadingSlashHandling);
}

BASE_FEATURE(kPreservePercentEncodedDotInPath,
             base::FEATURE_ENABLED_BY_DEFAULT);

bool IsPreservingPercentEncodedDotInPath() {
  // If the FeatureList isn't available yet, fall back to the feature's default
  // state. This may happen during early startup, see crbug.com/1441956.
  if (!base::FeatureList::GetInstance()) {
    return kPreservePercentEncodedDotInPath.default_state ==
           base::FEATURE_ENABLED_BY_DEFAULT;
  }
  return base::FeatureList::IsEnabled(kPreservePercentEncodedDotInPath);
}

BASE_FEATURE(kCacheGurlSchemeIsHttpOrHttpsResult,
             base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace url
