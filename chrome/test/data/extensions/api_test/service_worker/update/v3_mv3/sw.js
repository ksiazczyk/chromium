// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Version 3 extension service worker test script
// summary: Service worker for the updated extension that calls skipWaiting on install and sends a 'Pong from version 3' message to verify the worker loaded and ran its install event.
// ---

this.oninstall = function(e) {
  // We'd like to make sure onInstall event is executed after loading
  // the service worker.
  e.waitUntil(self.skipWaiting());
  chrome.test.sendMessage('Pong from version 3');
};
