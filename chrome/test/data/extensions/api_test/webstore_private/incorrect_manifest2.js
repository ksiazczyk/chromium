// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Incorrect manifest permissions install test
// summary: Test script that removes the permissions key from the manifest and expects the install to fail with a manifest invalid error.
// ---

// Parse the manifest, and delete the permissions key.
const manifestObj = JSON.parse(getManifest());
delete manifestObj['permissions'];

const manifest = JSON.stringify(manifestObj);

// Now do the install - we should get an install error because the actual crx
// had more permissions than the manifest we passed in to
// beginInstallWithManifest3.
chrome.webstorePrivate.beginInstallWithManifest3(
    {'id': extensionId, 'manifest': manifest}, function(result) {
      assertNoLastError();
      assertEq('', result);

      const expectedError = 'Manifest file is invalid';
      chrome.webstorePrivate.completeInstall(
          extensionId, callbackFail(expectedError));
    });
