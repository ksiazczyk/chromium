// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MIME handler test script
// summary: Checks the stream info original URL, fetches the stream URL, and messages the background page to finish the test.
// ---

chrome.mimeHandlerPrivate.getStreamInfo(function(streamInfo) {
  chrome.test.assertEq(
      chrome.runtime.getURL('well-known-mime.ics'), streamInfo.originalUrl);
  const x = new XMLHttpRequest();
  x.open('GET', streamInfo.streamUrl);
  x.onloadend = function() {
    chrome.runtime.sendMessage('finish test by checking SW URLs');
  };
  x.send();
});
