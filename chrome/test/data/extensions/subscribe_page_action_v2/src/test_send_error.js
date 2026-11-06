// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Used to communicate feed parsing errors to the testing framework.

// ---docerion
// type: test
// title: Feed parse error test helper
// summary: Sends a feed parsing error signal to the Chromium testing framework via domAutomationController.
// ---

if (window.domAutomationController) {
  window.domAutomationController.send('Error');
}
