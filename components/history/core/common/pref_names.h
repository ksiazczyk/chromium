// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Constants for the names of various preferences, for easier changing.

// ---docerion
// type: source
// title: Declarations for history preference name constants
// summary: Header declaring the extern preference name constants used by history components for saving and deleting browser history.
// ---

#ifndef COMPONENTS_HISTORY_CORE_COMMON_PREF_NAMES_H_
#define COMPONENTS_HISTORY_CORE_COMMON_PREF_NAMES_H_

#include <stddef.h>

namespace prefs {

extern const char kSavingBrowserHistoryDisabled[];
extern const char kAllowDeletingBrowserHistory[];

}  // namespace prefs

#endif  // COMPONENTS_HISTORY_CORE_COMMON_PREF_NAMES_H_
