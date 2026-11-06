// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: History preference name constants
// summary: Defines constant strings for history preference names, covering whether history saving is disabled and whether deleting browsing and download history is permitted.
// ---

#include "components/history/core/common/pref_names.h"

namespace prefs {

// Boolean controlling whether history saving is disabled.
const char kSavingBrowserHistoryDisabled[] = "history.saving_disabled";

// Boolean controlling whether deleting browsing and download history is
// permitted.
const char kAllowDeletingBrowserHistory[] = "history.deleting_enabled";

}  // namespace prefs
