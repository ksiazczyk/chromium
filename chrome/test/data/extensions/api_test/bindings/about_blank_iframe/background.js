// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for about_blank_iframe bindings test
// summary: Extension background script that creates an about:blank iframe, injects chrome bindings into it, and verifies chrome.runtime stays available across bindings recalculation.
// ---

function test() {
  chrome.test.assertNe(null, chrome.runtime);

  const iframe = document.createElement('iframe');
  document.body.appendChild(iframe);
  iframe.contentWindow.chrome = chrome;

  // The context-wide bindings recalculation happens when extensions are
  // enabled and disabled.
  chrome.test.sendMessage('load', chrome.test.callbackPass(function(msg) {
    chrome.test.assertNe(null, chrome.runtime);
  }));
}

chrome.test.runTests([test]);
