// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Popup script that triggers the download
// summary: Script for the popup that clicks the download anchor to start a download and signals success via chrome.test.notifyPass on load.
// ---

function run_tests() {
  const anchor = document.querySelector('a');
  anchor.click();
}

window.addEventListener('load', function() {
  chrome.test.notifyPass();
}, false);
