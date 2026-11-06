// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Managed storage disabled test background script
// summary: Runs a test asserting that chrome.storage.managed fails with an unavailability error in this Chrome instance.
// ---

chrome.test.runTests([
  function storageIsDisabled() {
    chrome.storage.managed.get(chrome.test.callbackFail(
        '"managed" is not available in this instance of Chrome'));
  },
]);
