// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test verifying a connection from a panel window
// summary: Runs a Chrome test that opens a panel window loading panel.html and asserts the incoming runtime connection's sender tab and window ID.
// ---

let panelWindowId = 0;

chrome.test.runTests([
  function openPanelThatConnectsToExtension() {
    chrome.test.listenOnce(chrome.runtime.onConnect, function(port) {
      chrome.test.assertEq(panelWindowId, port.sender.tab.windowId);
      chrome.test.assertTrue(port.sender.tab.id > 0);
    });
    chrome.windows.create(
        {url: chrome.runtime.getURL('panel.html'), type: 'panel'},
        chrome.test.callbackPass(function(win) {
          chrome.test.assertEq('panel', win.type);
          panelWindowId = win.id;
        }));
  },
]);
