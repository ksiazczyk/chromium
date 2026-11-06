// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Popup script that signals test completion
// summary: Runs when the popup loads and calls chrome.test.notifyPass to mark the browser action popup test as passed.
// ---

window.addEventListener('load', function() {
  chrome.test.notifyPass();
}, false);
