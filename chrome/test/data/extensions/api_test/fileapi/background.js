// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the chrome.fileapi extension API test
// summary: Requests a temporary filesystem, creates a directory and file, then opens tab.html to check the same filesystem is visible from a tab.
// ---

let fileSystem = null;

console.info('Requesting a filesystem...');
webkitRequestFileSystem(window.TEMPORARY, 100, getFileSystem, errorCallback);

function getFileSystem(fs) {
  fileSystem = fs;
  console.info(`DONE requesting filesystem: ${fileSystem.name}`);
  fileSystem.root.getDirectory(
      'dir', {create: true}, directoryCallback, errorCallback);
}

function directoryCallback(directory) {
  console.info(`DONE creating directory: ${directory.path}`);
  directory.getFile('file', {create: true}, fileCallback, errorCallback);
}

function fileCallback(file) {
  console.info(`DONE creating file: ${file.path}`);

  // See if we get the same filesystem space in the tab.
  console.info('Opening tab...');
  chrome.tabs.create({
    url: 'tab.html',
  });
}

function errorCallback(error) {
  chrome.test.fail(`Got unexpected error: ${error.code}`);
}
