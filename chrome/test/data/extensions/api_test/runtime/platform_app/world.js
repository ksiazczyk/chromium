// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Platform app test world script
// summary: Script loaded by hello.html that logs that the app window opened and calls chrome.test.notifyPass().
// ---

window.onload = function() {
  console.info('app window opened');
  chrome.test.notifyPass();
};
