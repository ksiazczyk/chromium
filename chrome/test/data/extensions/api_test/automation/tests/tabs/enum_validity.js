// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Automation node property access validity test
// summary: Browser test that iterates all properties of automation nodes to ensure native getters do not crash.
// ---

const allTests = [function testAutomationNodeProperties() {
  const automationRootNode = rootNode;
  const automationNode = automationRootNode.firstChild;

  // Property accesses on this node will trigger native C++ property getters
  // which should not crash.
  for (const name in automationRootNode) {
    automationRootNode[name];
  }

  for (const name in automationNode) {
    automationNode[name];
  }

  chrome.test.succeed();
}];

setUpAndRunTabsTests(allTests);
