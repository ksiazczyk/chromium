// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Tabs test for textarea append performance
// summary: Browser test that appends text to a textarea via a run button and succeeds when the done link receives focus, using textarea_append.html.
// ---

const allTests = [
  function testTextareaAppend() {
    const runButton = rootNode.find({role: 'button'});
    assertEq('button', runButton.role);

    const doneLink = rootNode.find({role: 'link'});
    assertEq('link', doneLink.role);

    rootNode.addEventListener('childrenChanged', (evt) => {});

    doneLink.addEventListener('focus', () => {
      chrome.test.succeed();
    });

    runButton.doDefault();
  },
];

setUpAndRunTabsTests(allTests, 'textarea_append.html');
