// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background with intentional syntax error
// summary: Test extension background script that deliberately calls an undefined method to trigger a syntax error for error reporting tests.
// ---

chrome.test.sendMessage('ready', () => {
  syntaxError();
});

const syntaxError = function() {
  // Intentional syntax error.
  // eslint-disable-next-line no-console
  console.lg('test');
};
