// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: contextMenus event page ID tests
// summary: Runs chrome.test checks that string IDs work for chrome.contextMenus.create in event pages while generated IDs and onclick parameters fail with the expected errors.
// ---

chrome.test.runTests([
  function stringID() {
    const id1 =
        chrome.contextMenus.create({id: 'id1', title: 'title1'}, function() {
          chrome.test.assertNoLastError();
          chrome.test.assertEq('id1', id1);
          chrome.contextMenus.remove('id1', chrome.test.callbackPass());
        });
  },

  function generatedID() {
    chrome.contextMenus.create(
        {title: 'title2'},
        chrome.test.callbackFail(
            'Extensions using event pages or Service ' +
            'Workers must pass an id parameter to ' +
            'chrome.contextMenus.create'));
  },

  function noOnClick() {
    chrome.contextMenus.create(
        {id: 'id3', title: 'title3', onclick: function() {}},
        chrome.test.callbackFail(
            'Extensions using event pages or Service Workers cannot pass an ' +
            'onclick parameter to chrome.contextMenus.create. Instead, use ' +
            'the chrome.contextMenus.onClicked event.'));
  },
]);
