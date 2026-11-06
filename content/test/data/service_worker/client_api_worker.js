// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker exercising client navigation API
// summary: Service worker test script that navigates a client on message commands and opens windows in response to notification clicks.
// ---

self.addEventListener('message', async (event) => {
  if (event.data.command == 'navigate') {
    const url = event.data.url;
    try {
      await event.source.navigate(url);
    } catch (err) {
      event.source.postMessage('navigate failed');
    }
  }
});

self.addEventListener('notificationclick', event => {
  clients.openWindow(event.notification.body);
});

