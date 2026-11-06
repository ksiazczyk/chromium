// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker test for SVG icon failure
// summary: Asserts that setting the action icon to an SVG from the service worker rejects with a decode error, since workers cannot load SVG images.
// ---

chrome.test.runTests([
  async function setIconFromWorkerFails() {
    // Service workers currently don't support loading SVG images
    // via createImageBitmap (https://crbug.com/40123818).
    await chrome.test.assertPromiseRejects(
        chrome.action.setIcon({path: 'icon.svg'}),
        /The source image could not be decoded/);
    chrome.test.succeed();
  },
]);
