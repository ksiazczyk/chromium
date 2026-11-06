// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script launching the isWritableFileEntry test app window
// summary: Opens test.html when the Chrome app is launched, serving as the entry point of the chrome.fileSystem.isWritableFileEntry API test app.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('test.html');
});
