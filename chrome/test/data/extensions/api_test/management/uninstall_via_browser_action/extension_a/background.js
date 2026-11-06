// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script of ExtensionA test extension
// summary: Service worker that uninstalls ExtensionB via chrome.management.uninstall when the browser action is clicked, verifying the call runs with a user gesture.
// ---

chrome.action.onClicked.addListener(() => {
  // We should be running with a user gesture.
  chrome.test.assertTrue(chrome.test.isProcessingUserGesture());

  // Uninstall the extension named 'ExtensionB'.
  chrome.management.getAll(chrome.test.callbackPass(items => {
    const extension = items.find(item => {
      return item.name === 'ExtensionB';
    });
    chrome.test.assertNe(undefined, extension);
    chrome.test.assertNe(undefined, extension.id);
    chrome.management.uninstall(extension.id, chrome.test.callbackPass(() => {
      chrome.test.notifyPass();
    }));
  }));
});

chrome.test.sendMessage('ready');
