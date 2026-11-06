// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script reporting webview guest sender details
// summary: Background script that answers external runtime messages with the sender's guest process ID and render frame routing ID when defined, supporting <webview> API tests.
// ---

chrome.runtime.onMessageExternal.addListener(
    function(message, sender, callback) {
  if (typeof sender.guestProcessId !== 'undefined' &&
      typeof sender.guestRenderFrameRoutingId !== 'undefined') {
    callback({
      result: 'defined',
      guestProcessId: sender.guestProcessId,
      guestRenderFrameRoutingId: sender.guestRenderFrameRoutingId
    });
  } else {
    callback({result: 'undefined'});
  }
});
