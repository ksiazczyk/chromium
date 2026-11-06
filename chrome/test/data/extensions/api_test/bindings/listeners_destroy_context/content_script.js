// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script for listeners destroying context test
// summary: Content script fixture that registers storage change listeners which remove the hosting iframe, used to test listener behavior when the context is destroyed.
// ---

let closed = false;
function getDestructiveListener() {
  return function() {
    if (closed) {
      chrome.test.sendMessage('failed');
    } else {
      closed = true;
      parent.document.body.removeChild(
          parent.document.body.querySelector('iframe'));
    }
  };
}

chrome.test.sendMessage('ready', function() {
  // Queue up a number of listeners, and then trigger them (by changing a
  // storage value).
  chrome.storage.onChanged.addListener(getDestructiveListener());
  chrome.storage.onChanged.addListener(getDestructiveListener());
  chrome.storage.onChanged.addListener(getDestructiveListener());
  chrome.storage.local.set({foo: 'bar'});
});
