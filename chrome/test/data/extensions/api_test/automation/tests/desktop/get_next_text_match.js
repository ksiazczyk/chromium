// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Automation test for getNextTextMatch
// summary: Browser test checking that rootNode.getNextTextMatch finds text matches forward and case-insensitively and returns nothing for non-matching queries.
// ---

const allTests = [
  function testGetMatch() {
    assertTrue(!!rootNode.getNextTextMatch('inner', false), 'Forward error');
    assertTrue(!!rootNode.getNextTextMatch('Inner', false), 'Case error');
    assertFalse(!!rootNode.getNextTextMatch('inner', true), 'No obj expected');
    assertFalse(!!rootNode.getNextTextMatch('asdf', false), 'no obj expected');
    chrome.test.succeed();
  },
];

setUpAndRunTabsTests(allTests, 'iframe_inner.html');
