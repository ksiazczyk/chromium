// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Automation focus views test
// summary: Tests focusing the first focusable text field, such as the location bar, and receiving a focus event in the automation tree.
// ---

const allTests = [
  function testFocusLocationBar() {
    const firstFocusableNode = findAutomationNode(rootNode, function(node) {
      return node.role === 'textField' && node.state.focusable;
    });

    assertTrue(!!firstFocusableNode);
    listenOnce(firstFocusableNode, EventType.FOCUS, function(e) {
      chrome.test.succeed();
    }, true);
    firstFocusableNode.focus();
  },
];

setUpAndRunDesktopTests(allTests);
