// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Link click simulation for the open_link test
// summary: Signals launch, points the test link at the test server, dispatches a click, and reports when the link opens.
// ---

chrome.test.sendMessage('Launched');

chrome.test.getConfig(function(config) {
  var linkNode = document.getElementById('test-link');
  linkNode.href = 'http://localhost:' + config.testServer.port +
      '/extensions/platform_apps/open_link/link.html';

  var clickEvent = document.createEvent('MouseEvents');
  clickEvent.initMouseEvent('click', true, true, window,
                            0, 0, 0, 0, 0, false, false,
                            false, false, 0, null);
  linkNode.dispatchEvent(clickEvent);
});

onmessage = function() {
  chrome.test.sendMessage('Link opened');
};
