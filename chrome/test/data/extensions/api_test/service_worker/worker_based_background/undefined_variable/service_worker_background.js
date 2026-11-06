// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background test script
// summary: Test service worker that signals readiness and then logs an intentionally undefined variable to trigger an error for the API test.
// ---

chrome.test.sendMessage('ready', () => {
  undefinedVariableError();
});

const undefinedVariableError = function() {
  // Intentional undefined variable
  console.info(undefined_variable);
};
