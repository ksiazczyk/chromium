// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Iframe script requesting getUserMedia with test callbacks
// summary: Runs inside the iframe and calls navigator.webkitGetUserMedia for audio, using chrome.test callbacks and swapping pass and fail when the query string is '?fail'.
// ---

let successCallback = chrome.test.succeed;
let failCallback = chrome.test.fail;

if (document.location.search === '?fail') {
  successCallback = chrome.test.fail.bind(
      chrome.test, 'gUM unexpectedly invoked the success callback');
  failCallback = chrome.test.succeed;
}

navigator.webkitGetUserMedia(
    {
      audio: true,
      video: false,
    },
    successCallback, failCallback);
