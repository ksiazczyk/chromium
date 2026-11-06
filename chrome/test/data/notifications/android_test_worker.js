// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker for the Android notifications test page
// summary: Service worker that handles notification click and reply actions and forwards results to the Android instrumentation test page.
// ---

var messagePort = null;

addEventListener('message', function(event) {
  messagePort = event.data;
  messagePort.postMessage('ready');
});

addEventListener('notificationclick', function(event) {
  if (event.notification.data === 'ACTION_CREATE_TAB')
    clients.openWindow('https://chrome.com/');
  else if (event.notification.data === 'ACTION_REPLY')
    messagePort.postMessage('reply: ' + event.reply)

  event.notification.close();
});
