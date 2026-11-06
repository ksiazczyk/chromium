// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: String helper header
// summary: Declares addStringFromCxx for the Swift interop tests and notes that string.h would conflict with the standard library header.
// ---

#ifndef IOS_CHROME_TEST_SWIFT_INTEROP_STD_STRING_HELPER_H_
#define IOS_CHROME_TEST_SWIFT_INTEROP_STD_STRING_HELPER_H_

#include <string>

// Avoid using string.h as a file name. It will conflict with the one in the
// standard library.

std::string addStringFromCxx(std::string a);

#endif  // IOS_CHROME_TEST_SWIFT_INTEROP_STD_STRING_HELPER_H_
