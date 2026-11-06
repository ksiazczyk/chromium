// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background script for tabs events test
// summary: Service worker that listens to chrome.tabs.onUpdated, ensures the loading status is seen only once, and reports ready and finished via chrome.test messages.
// ---

let seenLoading = false;

chrome.tabs.onUpdated.addListener(
    function localListener(tabId, changeInfo, tab) {
      if (changeInfo.status === 'loading') {
        if (seenLoading === true) {
          chrome.test.sendMessage('ERROR');
        } else {
          seenLoading = true;
        }
      } else if (changeInfo.status === 'complete') {
        chrome.test.sendMessage(seenLoading === true ? 'finished' : 'ERROR');
      }
    });

chrome.test.sendMessage('ready');
