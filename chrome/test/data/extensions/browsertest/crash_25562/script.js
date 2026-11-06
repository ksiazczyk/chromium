// Copyright 2009 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script of the crash 25562 test extension
// summary: Connects to the extension background page and posts a message when running in the top window, triggering the page action in the browser test.
// ---

if (window === top) {
  chrome.runtime.connect().postMessage(true);
}
