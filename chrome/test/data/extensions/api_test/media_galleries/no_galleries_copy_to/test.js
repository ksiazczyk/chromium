// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Media galleries no galleries copyTo browser test
// summary: Browser test asserting that getMediaFileSystems returns zero galleries when the extension lacks the allGalleries permission.
// ---

const mediaGalleries = chrome.mediaGalleries;

const mediaFileSystemsListCallback = function(results) {
  chrome.test.assertEq(0, results.length);
};

chrome.test.runTests([
  function mediaGalleriesNoGalleries() {
    mediaGalleries.getMediaFileSystems(
        chrome.test.callbackPass(mediaFileSystemsListCallback));
  },
]);
