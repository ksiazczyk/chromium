// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: UI DevTools feature flag definition
// summary: Defines the ui-debug-tools-enable-synthetic-events base feature flag, disabled by default, for sending synthetic events from UI debugging tools.
// ---

#include "components/ui_devtools/ui_devtools_features.h"

namespace ui_devtools {

BASE_FEATURE(kUIDebugToolsEnableSyntheticEvents,
             "ui-debug-tools-enable-synthetic-events",
             base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace ui_devtools
