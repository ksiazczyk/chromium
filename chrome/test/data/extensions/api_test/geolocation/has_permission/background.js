// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Geolocation test background script
// summary: Background page script that runs geolocation getCurrentPosition and watchPosition tests expected to succeed because the extension has geolocation permission.
// ---

// These API calls should pass since geolocation is enabled for this
// extension.
chrome.test.runTests([
  function geolocation_getCurrentPosition() {
    navigator.geolocation.getCurrentPosition(
        chrome.test.succeed, chrome.test.fail);
  },
  function geolocation_watchPosition() {
    navigator.geolocation.watchPosition(chrome.test.succeed, chrome.test.fail);
  },
]);
