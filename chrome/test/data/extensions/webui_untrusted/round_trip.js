// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Round-trip messaging test for untrusted WebUIs
// summary: Browser test data checking that messages can be sent from an untrusted WebUI to the browser process and back with the expected response.
// ---

// Basic test to ensure we can send messages to the browser process and back.
chrome.test.waitForRoundTrip('foo', (response) => {
  chrome.test.assertEq('foo', response);
  chrome.test.notifyPass();
});
