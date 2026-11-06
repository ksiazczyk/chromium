// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Used to communicate feed parsing errors to the testing framework.

// ---docerion
// type: test
// title: test_send_error.js
// summary: Test helper that reports feed parsing errors to the browser test framework through the domAutomationController.
// ---

if (window.domAutomationController) {
  window.domAutomationController.send('Error');
}
