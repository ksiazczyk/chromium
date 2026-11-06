// Copyright 2010 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for incognito context menus test
// summary: Service worker that creates a context menu item and reports clicks via test messages, adapting its behavior to whether it runs in an incognito context.
// ---

const inIncognitoContext = chrome.extension.inIncognitoContext;
const incognitoStr = inIncognitoContext ? 'incognito' : 'regular';

chrome.contextMenus.onClicked.addListener(function(info, tab) {
  chrome.test.sendMessage('onclick fired ' + incognitoStr);
});

chrome.contextMenus.create(
    {title: 'item ' + incognitoStr, id: 'id_' + incognitoStr}, function() {
      chrome.test.assertNoLastError();
      chrome.test.sendMessage('created item ' + incognitoStr);
    });
