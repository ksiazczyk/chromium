// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Media galleries copyTo access test script
// summary: Runs browser tests verifying that copying a valid WEBP image via mediaGalleries copyTo succeeds and copying an invalid one fails.
// ---

chrome.test.runTests([
  function validFileCopyToShouldSucceed() {
    runCopyToTest(validWEBPImageCase, true /* expect success */);
  },
  function invalidFileCopyToShouldFail() {
    runCopyToTest(invalidWEBPImageCase, false /* expect failure */);
  },
]);
