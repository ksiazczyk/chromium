// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script blocking JavaScript via content settings
// summary: Extension background script that uses the contentSettings API to block JavaScript on all URLs as part of the webview test.
// ---

chrome.contentSettings.javascript.set({
  primaryPattern: '<all_urls>',
  setting: 'block'
}, function() {
  window.console.log('Blocking all JavaScript');
});

