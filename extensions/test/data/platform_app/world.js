// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: World script notifying test pass
// summary: Logs that the app window opened and calls chrome.test.notifyPass() to mark the extension test as passed.
// ---

window.onload = function() {
  console.log('app window opened');
  chrome.test.notifyPass();
};
