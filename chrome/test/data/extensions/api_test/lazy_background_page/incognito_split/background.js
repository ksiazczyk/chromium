// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for incognito split lazy background page test
// summary: Extension background script that reports success messages distinguishing incognito and normal contexts when the browser action is clicked or a bookmark is created.
// ---

const inIncognitoContext = chrome.extension.inIncognitoContext;
const message = inIncognitoContext ? 'waiting_incognito' : 'waiting';

function reportSuccess() {
  chrome.test.sendMessage(message);
}

chrome.browserAction.onClicked.addListener(function() {
  reportSuccess();
});

chrome.bookmarks.onCreated.addListener(function() {
  reportSuccess();
});
