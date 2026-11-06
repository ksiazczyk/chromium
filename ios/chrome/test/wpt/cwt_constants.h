// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CWT EDO port constant declaration
// summary: Declares the EDO port number constant shared by the WPT test driver and the Chrome app process.
// ---

#ifndef IOS_CHROME_TEST_WPT_CWT_CONSTANTS_H_
#define IOS_CHROME_TEST_WPT_CWT_CONSTANTS_H_

// The port that the app process listens on for EDO communication with the
// the test process.
extern const int kCwtEdoPortNumber;

#endif  // IOS_CHROME_TEST_WPT_CWT_CONSTANTS_H_
