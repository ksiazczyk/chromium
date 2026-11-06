// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Popup script notifying test success
// summary: JavaScript that calls chrome.test.notifyPass when the popup loads, marking the API test as passed.
// ---

window.addEventListener('load', function() {
  chrome.test.notifyPass();
}, false);
