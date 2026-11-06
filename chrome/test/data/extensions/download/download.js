// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Download trigger script
// summary: On page load, simulates a mouse click on the helper-download anchor to start downloading download.dat, which is renamed to download.exe.
// ---

window.onload = function() {
  // Begin the download (Code based on IE Tab extension)
  const anchorObj = document.body.children.namedItem('helper-download');
  anchorObj.href = chrome.runtime.getURL('download.dat');
  // Raise a fake click on the .dat file link, which will rename it to .exe
  const evt = document.createEvent('MouseEvents');
  evt.initMouseEvent(
      'click', true, true, window, 0, 0, 0, 0, 0, false, false, false, false, 0,
      null);
  const allowDefault = anchorObj.dispatchEvent(evt);
};
