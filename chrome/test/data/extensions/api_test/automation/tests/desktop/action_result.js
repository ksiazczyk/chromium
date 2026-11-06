// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Automation action result test
// summary: Browser test verifying that a scrollBackward action on a text field reports a result through the desktop automation API.
// ---

const allTests = [function testActionResult() {
  const firstTextField = rootNode.find({role: RoleType.TEXT_FIELD});
  assertTrue(!!firstTextField);
  firstTextField.scrollBackward(result => {
    assertTrue(!!result);
    chrome.test.succeed();
  });
}];

setUpAndRunDesktopTests(allTests);
