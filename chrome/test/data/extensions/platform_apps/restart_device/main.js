// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Runtime restart trigger script
// summary: Sends a Launched test message and calls chrome.runtime.restart() when the reply asks for a restart.
// ---

chrome.test.sendMessage('Launched', function(response) {
  if (response == "restart") {
    chrome.runtime.restart();
    chrome.test.sendMessage('restartRequested');
  }
});
