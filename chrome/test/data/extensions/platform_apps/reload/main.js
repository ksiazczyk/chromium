// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Reload test app main script
// summary: Sends a Launched test message and calls chrome.runtime.reload when the reply is reload, exercising the reload API.
// ---

chrome.test.sendMessage('Launched', function(response) {
  if (response == "reload")
    chrome.runtime.reload();
});
