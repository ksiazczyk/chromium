// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Action runtime error background script
// summary: Test extension background script that deliberately throws a JavaScript runtime error when the action is clicked, for error console testing.
// ---

chrome.action.onClicked.addListener(function(tab) {
  // This will cause a javascript error, since these are not defined.
  foobar = baz;
});
