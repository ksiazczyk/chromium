// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Accessibility focus automation test
// summary: Browser test that sets accessibility focus on a text node and verifies the focused node and location change events.
// ---

const allTests = [function testAccessibilityFocus() {
  const textNode = rootNode.find({attributes: {name: 'Text'}});
  textNode.setAccessibilityFocus();

  chrome.automation.getAccessibilityFocus((focusedNode) => {
    assertEq(textNode, focusedNode);

    textNode.addEventListener('locationChanged', (evt) => {
      assertEq(textNode, evt.target);
      chrome.test.succeed();
    });

    rootNode.find({role: 'button'}).doDefault();
  });
}];

setUpAndRunTabsTests(allTests, 'accessibility_focus.html');
