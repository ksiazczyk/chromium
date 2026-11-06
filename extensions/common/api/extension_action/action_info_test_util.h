// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test utility declarations for extension action type helpers
// summary: Declares test helpers for mapping action types to API names and manifest versions and for retrieving a typed ActionInfo from an extension.
// ---

#ifndef EXTENSIONS_COMMON_API_EXTENSION_ACTION_ACTION_INFO_TEST_UTIL_H_
#define EXTENSIONS_COMMON_API_EXTENSION_ACTION_ACTION_INFO_TEST_UTIL_H_

#include "extensions/common/api/extension_action/action_info.h"

namespace extensions {
class Extension;

// Given an `action_type`, returns the corresponding API name to be referenced
// from JavaScript.
const char* GetAPINameForActionType(ActionInfo::Type action_type);

// Retrieves the ActionInfo for the `extension` if and only if it
// corresponds to the specified `type`. This is useful for testing to ensure
// the type is specified correctly, since most production code is type-
// agnostic.
const ActionInfo* GetActionInfoOfType(const Extension& extension,
                                      ActionInfo::Type type);

// Retrieves the appropriate manifest version for the given `type`; necessary
// because the chrome.action API is restricted to MV3, while browser and page
// actions are restricted to MV2.
int GetManifestVersionForActionType(ActionInfo::Type type);

}  // namespace extensions

#endif  // EXTENSIONS_COMMON_API_EXTENSION_ACTION_ACTION_INFO_TEST_UTIL_H_
