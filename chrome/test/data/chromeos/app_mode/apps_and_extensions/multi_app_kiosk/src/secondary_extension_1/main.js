// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Kiosk secondary extension background script
// summary: Background script for the kiosk secondary test extension that responds to ping messages sent from a specific extension ID.
// ---

chrome.runtime.onMessageExternal.addListener(
  function(request, sender, sendResponse) {
    if (sender.id != 'ceobkcclegcliomogfoeoheahogoecgl')
      return;

    if (request.ping)
      sendResponse({pingResponse: 'true'});
});
