// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script for the keybinding propagation test
// summary: Content script that listens for F keyup events in web pages and posts a message to the extension so the test can verify command key propagation.
// ---

const port = chrome.extension.connect({name: 'continue_propagation'});
document.body.addEventListener('keyup', function(evt) {
  if (evt.keyCode === 70 /* F */) {
    port.postMessage({result: true});
  }
}, true);
