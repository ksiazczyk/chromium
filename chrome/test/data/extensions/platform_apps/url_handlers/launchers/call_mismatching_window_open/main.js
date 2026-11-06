// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Open mismatching target URL via window.open in launcher test
// summary: Builds a URL to the mismatching target page on the test server, opens it with window.open so it is redirected to the handler app, and signals that the launcher is done.
// ---

chrome.test.getConfig(function(config) {
  var port = config ? config.testServer.port : '0';
  var href =
      'http://localhost:' + port +
      '/extensions/platform_apps/url_handlers/common/mismatching_target.html';
  // This click should be intercepted and redirected to the handler app
  // (pre-installed by the CPP side of the test before launching this).
  window.open(href);

  chrome.test.sendMessage("Launcher done");
});
