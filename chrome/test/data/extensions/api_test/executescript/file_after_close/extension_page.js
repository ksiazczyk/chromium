// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Extension page script that injects and closes the window
// summary: On load, finds the tab showing the first web page, executes the injected script file in it, and immediately closes the extension window.
// ---

window.onload = function() {
  chrome.windows.getCurrent(null, function(window) {
    chrome.tabs.query({windowId: window.id}, function(tabs) {
      for (let i = 0; i < tabs.length; i++) {
        const tab = tabs[i];
        if (tab.url.indexOf('web_page1') > -1) {
          chrome.tabs.executeScript(tab.id, {file: 'script.js'});
          window.close();
          break;
        }
      }
    });
  });
};
