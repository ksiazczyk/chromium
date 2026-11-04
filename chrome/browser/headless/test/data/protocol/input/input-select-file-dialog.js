// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Select file dialog test
// summary: Headless protocol test that clicks a file input with a user gesture to check that the select file dialog appears.
// ---

(async function(testRunner) {
  const html = `
    <input type="file" id="myfile">
  `;
  const {session} = await testRunner.startHTML(
      html, 'Tests if select file dialog is showing.');

  await session.evaluateAsyncWithUserGesture(
      `document.getElementById('myfile').click()`);

  testRunner.completeTest();
})
