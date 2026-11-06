// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Data Controls feature flag definitions
// summary: Defines base::Feature flags that toggle Data Controls behavior for downloads, Search with, Glic, URL regex and size conditions, and custom messages.
// ---

#include "components/enterprise/data_controls/core/browser/features.h"

namespace data_controls {


BASE_FEATURE(kEnableDownloadDataControls, base::FEATURE_DISABLED_BY_DEFAULT);

BASE_FEATURE(kDataControlsSearchWith, base::FEATURE_ENABLED_BY_DEFAULT);

BASE_FEATURE(kDataControlsGlic, base::FEATURE_ENABLED_BY_DEFAULT);

BASE_FEATURE(kDataControlsUrlRegexAndSizeAttributes,
             base::FEATURE_DISABLED_BY_DEFAULT);

BASE_FEATURE(kDataControlsCustomMessage,
             base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace data_controls
