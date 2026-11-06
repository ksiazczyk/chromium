// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: App launch background script
// summary: Background script that, on app launch, receives window creation options from the test and opens index.html with them.
// ---

chrome.app.runtime.onLaunched.addListener(function() {

  chrome.test.sendMessage('launched', function(reply) {
    // Create window options defined in tests.
    var options = JSON.parse(reply);
    chrome.app.window.create('index.html', options, function() {});
  });

});
