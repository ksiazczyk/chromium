// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Notification permissions test service worker
// summary: Service worker that answers instrumentation messages from the background script with permission values read in the service worker context.
// ---

let messagePort = null;

addEventListener('install', event => {
  event.waitUntil(skipWaiting());
});

addEventListener('activate', event => {
  event.waitUntil(clients.claim());
});

addEventListener('message', event => {
  messagePort = event.data;

  // Listens to incoming instructions from the hosting background script.
  messagePort.onmessage = async messageEvent => {
    switch (messageEvent.data) {
      case 'notification-permission':
        messagePort.postMessage(Notification.permission);
        break;
      case 'pushManager-permissionState':
        messagePort.postMessage(await registration.pushManager.permissionState({
          userVisibleOnly: true,
        }));
        break;
      case 'permissions-query':
        const permissionState = await navigator.permissions.query({
          name: 'notifications',
        });

        messagePort.postMessage(permissionState.state);
        break;
      default:
        console.error(`Unexpected message: ${messageEvent.data}`);
    }
  };

  messagePort.postMessage('ready');
});
