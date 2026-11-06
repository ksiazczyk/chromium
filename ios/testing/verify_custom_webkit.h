// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Custom WebKit Verification Header
// summary: Declares IsCustomWebKitLoadedIfRequested, which reports whether custom WebKit frameworks were loaded when requested via command line.
// ---

#ifndef IOS_TESTING_VERIFY_CUSTOM_WEBKIT_H_
#define IOS_TESTING_VERIFY_CUSTOM_WEBKIT_H_

// Returns whether custom WebKit frameworks were loaded if
// --run-with-custom-webkit was passed on the commandline.  Otherwise, always
// returns true.
bool IsCustomWebKitLoadedIfRequested();

#endif  // IOS_TESTING_VERIFY_CUSTOM_WEBKIT_H_
