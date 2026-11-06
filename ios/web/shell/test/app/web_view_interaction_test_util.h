// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Web view interaction test utility declarations
// summary: Declares TapWebViewElementWithId, which taps the element with the given ID in the current WebState using a JavaScript click event.
// ---

#ifndef IOS_WEB_SHELL_TEST_APP_WEB_VIEW_INTERACTION_TEST_UTIL_H_
#define IOS_WEB_SHELL_TEST_APP_WEB_VIEW_INTERACTION_TEST_UTIL_H_

#include <string>

namespace web {
namespace shell_test_util {

// Attempts to tap the element with `element_id` in the current WebState
// using a JavaScript click() event.
void TapWebViewElementWithId(const std::string& element_id);

}  // namespace shell_test_util
}  // namespace web

#endif  // IOS_WEB_SHELL_TEST_APP_WEB_VIEW_INTERACTION_TEST_UTIL_H_
