// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Ephemeral app power test keep-awake script
// summary: On load, requests a system keep-awake lock via the chrome.power API and signals the test that the app launched.
// ---

onload = function() {
  chrome.power.requestKeepAwake('system');
  chrome.test.sendMessage('launched');
};
