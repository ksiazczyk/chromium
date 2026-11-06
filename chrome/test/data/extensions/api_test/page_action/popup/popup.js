// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Popup script of the page action test extension
// summary: Popup script that waits for the browser to resize the window once and then signals test success.
// ---

// Wait to be resized by the browser once before indicating pass.
function onResize() {
  window.removeEventListener('resize', onResize);
  chrome.test.notifyPass();
}

window.addEventListener('resize', onResize);
