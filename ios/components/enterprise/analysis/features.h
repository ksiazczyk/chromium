// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header declaring the iOS bulk data entry connector feature
// summary: Declares the enterprise_connectors feature flag kEnableBulkDataEntryConnectorIOS, which controls whether the enterprise pasted content DLP feature is enabled on iOS.
// ---

#ifndef IOS_COMPONENTS_ENTERPRISE_ANALYSIS_FEATURES_H_
#define IOS_COMPONENTS_ENTERPRISE_ANALYSIS_FEATURES_H_

#import "base/feature_list.h"

namespace enterprise_connectors {

// Controls whether the enterprise pasted content DLP feature is enabled on iOS.
BASE_DECLARE_FEATURE(kEnableBulkDataEntryConnectorIOS);

}  // namespace enterprise_connectors

#endif  // IOS_COMPONENTS_ENTERPRISE_ANALYSIS_FEATURES_H_
