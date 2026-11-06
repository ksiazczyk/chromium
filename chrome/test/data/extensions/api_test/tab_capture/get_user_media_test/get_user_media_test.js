// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Tab Capture Get User Media Test
// summary: Browser test that requests tab media via navigator.webkitGetUserMedia with a tab media source ID and expects the request to fail.
// ---

const onReply = function(id) {
  chrome.test.runTests([function testGetUserMedia() {
    navigator.webkitGetUserMedia(
        {
          video: {
            mandatory: {
              chromeMediaSource: 'tab',
              chromeMediaSourceId: id,
            },
          },
          audio: false,
        },
        chrome.test.fail, chrome.test.succeed);
  }]);
};

chrome.test.notifyPass();
chrome.test.sendMessage('ready', onReply);
