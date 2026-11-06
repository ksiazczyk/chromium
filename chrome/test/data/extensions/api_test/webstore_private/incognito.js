// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Incognito mode test
// summary: Verifies that webstorePrivate.isInIncognitoMode reports true when running in an incognito context.
// ---

const tests = [
  function isInIncognitoMode() {
    chrome.webstorePrivate.isInIncognitoMode(callbackPass(function(incognito) {
      assertTrue(incognito);
    }));
  },
];

runTests(tests);
