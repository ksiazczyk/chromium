// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script for about:blank and about:srcdoc injection test
// summary: Content script that reports its frame location to the extension and opens an about:blank popup on request, serving as the fixture for the injection tests.
// ---

if (location.protocol === 'about:') {
  chrome.runtime.sendMessage('message from ' + location.href);
} else if (frameElement && !frameElement.getAttribute('src')) {
  chrome.runtime.sendMessage('message from about:blank');
}

chrome.runtime.onMessage.addListener(function(message) {
  if (message === 'open about:blank popup') {
    window.open('about:blank');
  }
});
