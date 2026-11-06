/**
 * Copyright 2017 The Chromium Authors
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

// We need this thing because we can only run chooseDesktopMedia from inside
// the extension.

// ---docerion
// type: test
// title: Desktop capture test extension background script
// summary: Background script of a test extension that calls chrome.desktopCapture.chooseDesktopMedia for requested source types and sends the resulting stream ID back to the tab.
// ---

chrome.runtime.onMessage.addListener(function(request, sender, sendResponse) {
  if (request.desktopSourceTypes) {
    chrome.desktopCapture.chooseDesktopMedia(
        request.desktopSourceTypes, sender.tab, function(id) {
          chrome.tabs.sendMessage(sender.tab.id, {streamId: id});
        });
  }
});
