// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Media galleries no galleries API test
// summary: Browser test that calls chrome.mediaGalleries.getMediaFileSystems and asserts an empty list is returned when the allGalleries permission is absent.
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
