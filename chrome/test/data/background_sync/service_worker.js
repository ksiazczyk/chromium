// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background Sync instrumentation test service worker
// summary: Service worker for the instrumentation test that reports sync and periodicsync outcomes over a message port, succeeding or retrying depending on the event tag.
// ---

let messagePort = null;

self.addEventListener('message', event => {
  messagePort = event.data;
  messagePort.postMessage('ready');
});

self.addEventListener('sync', async event => {
  const onSync = async () => {
    switch (event.tag) {
      case 'tagSucceedsSync':
        messagePort.postMessage('onsync: ' + event.tag);
        return;
      case 'tagFailsSync':
        throw 'Try again';
    }
  };
  event.waitUntil(onSync());
});

self.addEventListener('periodicsync', event => {
  const onPeriodicSync = async () => {
    switch (event.tag) {
      case 'tagSucceedsSync':
        messagePort.postMessage('onperiodicsync: ' + event.tag);
        return;
      case 'tagFailsSync':
        messagePort.postMessage('failed periodicsync: '+ event.tag);
        throw 'Try again';
    }
  };
  event.waitUntil(onPeriodicSync());
});
