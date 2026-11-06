// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Component app reload background script
// summary: Test extension background script that reports the app launched and reloads the runtime when the test replies with 'reload'.
// ---

chrome.test.sendMessage('Launched', function(response) {
  chrome.test.assertEq('reload', response);
  chrome.runtime.reload();
});
