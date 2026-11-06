// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Blank link click dispatcher for the URL handler test
// summary: Points the blank link at the test server's target page and dispatches a click that should be intercepted and redirected to the URL handler app under test.
// ---

chrome.test.getConfig(function(config) {
  var port = config ? config.testServer.port : '0';

  var link = document.getElementById('link');
  link.href =
      'http://localhost:' + port +
      '/extensions/platform_apps/url_handlers/common/target.html';

  // This click should be intercepted and redirected to the handler app
  // (pre-installed by the CPP side of the test before launching this).
  var clickEvent = document.createEvent('MouseEvents');
  clickEvent.initMouseEvent('click', true, true, window,
                            0, 0, 0, 0, 0, false, false,
                            false, false, 0, null);
  link.dispatchEvent(clickEvent);

  chrome.test.sendMessage("Launcher done");
});
