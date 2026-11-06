// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Context menus enabled test service worker
// summary: Service worker that creates and updates a context menu item in response to test messages to verify the enabled state handling of context menus.
// ---

const onMessageReply = function(message) {
  const menuId = 'my_id';
  const enabled = (message === 'start enabled');
  chrome.contextMenus.create(
      {title: 'Extension Item 1', id: menuId, enabled: enabled}, function() {
        chrome.test.sendMessage('create', function(message) {
          chrome.test.assertEq('go', message);
          chrome.contextMenus.update(menuId, {'enabled': !enabled}, function() {
            chrome.test.sendMessage('update');
          });
        });
      });
};

chrome.test.sendMessage('begin', onMessageReply);
