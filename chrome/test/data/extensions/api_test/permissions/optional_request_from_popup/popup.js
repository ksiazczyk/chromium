// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Popup script requesting optional permissions
// summary: Popup script for the browser test that requests an optional host permission once the popup has loaded and notifies the test harness.
// ---

chrome.test.sendMessage('popup_loaded', message => {
  chrome.permissions.request({origins: ['https://www.google.com/']});
});
