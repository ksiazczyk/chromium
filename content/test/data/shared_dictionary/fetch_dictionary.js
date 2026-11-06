// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Worker fetch helper for dictionary tests
// summary: Worker script that fetches a URL received via message events, supporting dedicated, shared, and service worker dictionary tests.
// ---

// For Dedicatd Worker and Service Worker.
self.addEventListener('message', (e) => {
  fetch(e.data);
});

// For Shared Worker.
self.addEventListener('connect', (e) => {
  const port = e.ports[0];
  port.addEventListener('message', (e) => {
    fetch(e.data);
  });
  port.start();
});
