// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Tab script verifying shared filesystem access in the chrome.fileapi test
// summary: Runs chrome.test checks in the tab, verifying the same filesystem image is accessible and cleaning up the created directory.
// ---

let fileSystem = null;

function errorCallback(error) {
  chrome.test.fail(`Got unexpected error: ${error.code}`);
}

function successCallback(entry) {
  chrome.test.succeed();
}

function successEntryCallback(entry) {
  fileSystem.root.getDirectory('dir', {create: false}, function(directory) {
    // Do clean-up.  (Assume the tab won't be reloaded in testing.)
    directory.removeRecursively(successCallback, errorCallback);
  }, errorCallback);
}

chrome.test.runTests([function tab() {
  console.info('Requesting a filesystem...');
  webkitRequestFileSystem(window.TEMPORARY, 100, function(fs) {
    fileSystem = fs;
    // See if we get the same filesystem image.
    console.info(`DONE requesting filesystem: ${fileSystem.name}`);
    fileSystem.root.getFile(
        'dir/file', {create: false}, successEntryCallback, errorCallback);
  }, errorCallback);
}]);
