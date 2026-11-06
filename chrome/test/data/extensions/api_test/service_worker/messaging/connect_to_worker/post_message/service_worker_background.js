// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background for the connect messaging test
// summary: Service worker background script that listens for connections, asserts the 'tab->worker' message, and replies with 'tab->worker->tab'.
// ---

chrome.runtime.onConnect.addListener(port => {
  port.onMessage.addListener(msg => {
    chrome.test.assertEq('tab->worker', msg);
    port.postMessage('tab->worker->tab');
  });
});
