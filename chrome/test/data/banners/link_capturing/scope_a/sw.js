// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker for link capturing tests in scope A
// summary: Service worker for the link capturing tests that opens the URL carried in a notification's data when the notification is clicked.
// ---

self.addEventListener('notificationclick', (e) => {
  console.assert('url' in e.notification.data);
  let url = e.notification.data.url;
  console.log('Received notification to open ' + url);
  clients.openWindow(url);
  e.notification.close();
});

