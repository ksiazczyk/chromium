// Copyright 2010 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Event page script for incognito context menu test
// summary: Background script that creates a context menu item and reports clicks differently depending on whether it runs in an incognito context.
// ---

const inIncognitoContext = chrome.extension.inIncognitoContext;
const incognitoStr = inIncognitoContext ? 'incognito' : 'regular';

chrome.runtime.onInstalled.addListener(function(details) {
  chrome.contextMenus.onClicked.addListener(function(info, tab) {
    chrome.test.sendMessage('onclick fired ' + incognitoStr);
  });

  chrome.contextMenus.create(
      {title: 'item ' + incognitoStr, id: 'id_' + incognitoStr}, function() {
        chrome.test.assertNoLastError();
        chrome.test.sendMessage('created item ' + incognitoStr);
      });
});
