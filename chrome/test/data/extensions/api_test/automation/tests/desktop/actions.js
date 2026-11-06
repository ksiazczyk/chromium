// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Automation actions test
// summary: Tests the doDefault and showContextMenu automation actions, checking that focus and menu start events are delivered.
// ---

const allTests = [
  async function testDoDefault() {
    const firstTextField = rootNode.find({role: RoleType.TEXT_FIELD});
    assertTrue(!!firstTextField);
    firstTextField.doDefault();
    await new Promise(r => firstTextField.addEventListener(EventType.FOCUS, r));
    chrome.test.succeed();
  },

  async function testContextMenu() {
    const addressBar = rootNode.find({role: RoleType.TEXT_FIELD});
    addressBar.showContextMenu();
    await new Promise(r => rootNode.addEventListener(EventType.MENU_START, r));
    chrome.test.succeed();
  },
];

setUpAndRunDesktopTests(allTests);
