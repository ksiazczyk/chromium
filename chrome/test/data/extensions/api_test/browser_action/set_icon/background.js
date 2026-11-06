// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Browser action setIcon test background script
// summary: Background script for the browser action API test that draws image data on an OffscreenCanvas and sets the extension icon via chrome.browserAction.setIcon().
// ---

function getImageData() {
  const canvas = new OffscreenCanvas(10, 100);
  const ctx = canvas.getContext('2d');

  ctx.fillStyle = 'green';
  ctx.fillRect(10, 10, 100, 100);

  return ctx.getImageData(50, 50, 100, 100);
}

chrome.tabs.query({active: true}, function(tabs) {
  // When the browser action is clicked, add an icon.
  chrome.browserAction.onClicked.addListener(function(tab) {
    chrome.browserAction.setIcon({
      imageData: getImageData(),
    });
    chrome.test.notifyPass();
  });
  chrome.test.notifyPass();
});
