// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Permission enum to string test helper header
// summary: Declares ToString helpers that convert permission-related enums to strings for parametrized test names and simple logging.
// ---

#ifndef CHROME_BROWSER_PERMISSIONS_TEST_ENUMS_TO_STRING_H_
#define CHROME_BROWSER_PERMISSIONS_TEST_ENUMS_TO_STRING_H_

#include <string_view>

#include "components/permissions/permission_request_enums.h"

// Contains methods that convert permission relevant enums into strings. As
// there is no elegant C++ support for this, this provides methods to quickly
// convert enums into strings for testing purposes. This is for example helpful
// for parametrized test name generators or for simple logging.
namespace test {
std::string_view ToString(
    permissions::PermissionPredictionSource prediction_source);
}  // namespace test

#endif  // CHROME_BROWSER_PERMISSIONS_TEST_ENUMS_TO_STRING_H_
