// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Lookalike URL constants header
// summary: Declares test-only URL path constants for lookalike URL interstitial tests, with and without a suggested URL.
// ---

#ifndef IOS_CHROME_BROWSER_WEB_MODEL_LOOKALIKE_URL_CONSTANTS_H_
#define IOS_CHROME_BROWSER_WEB_MODEL_LOOKALIKE_URL_CONSTANTS_H_

// Constant used for testing a lookalike URL interstitial.
extern const char kLookalikePagePathForTesting[];

// Constant used for testing a lookalike URL interstitial with no suggested URL.
extern const char kLookalikePageEmptyUrlPathForTesting[];

#endif  // IOS_CHROME_BROWSER_WEB_MODEL_LOOKALIKE_URL_CONSTANTS_H_
