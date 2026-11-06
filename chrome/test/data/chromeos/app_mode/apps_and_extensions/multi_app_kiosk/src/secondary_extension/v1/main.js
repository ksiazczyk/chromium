// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Kiosk secondary extension background script
// summary: Background script for the kiosk test secondary extension that responds to external ping messages with a ping response.
// ---

chrome.runtime.onMessageExternal.addListener(
  function(request, sender, sendResponse) {
    if (request.ping)
      sendResponse({pingResponse: 'true'});
});
