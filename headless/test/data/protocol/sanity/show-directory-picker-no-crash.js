// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Show directory picker no crash test
// summary: Sanity test that calls showDirectoryPicker and checks the dialog opens without crashing the browser.
// ---

(async function(/** @type {import('test_runner').TestRunner} */ testRunner) {
  const {page, session, dp} = await testRunner.startURL(
      'resources/body.html',
      'Tests that showDirectoryPicker does not crash the browser');
  const showResult = await session.evaluateAsync(`
    !!window.showDirectoryPicker()
  `);
  testRunner.log(`Did show dialog: ${showResult}`);
  testRunner.completeTest();
})
