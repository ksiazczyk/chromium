// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Banner test service worker
// summary: Service worker that serves an offline hello response unless the request URL contains an ignore parameter, supporting banner tests.
// ---

self.addEventListener('fetch', e => {
  // Avoid to handle a request if the url contains an ignore parameter.
  if (e.request.url.indexOf('?ignore') == -1) {
    e.respondWith((async () => {
      try {
        return await fetch(e.request);
      } catch (error) {
        return new Response('Hello offline page');
      }
    })());
  }
});
