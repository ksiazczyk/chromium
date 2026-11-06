// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker fetch interceptor
// summary: Service worker script that intercepts fetch events for requests whose URL contains '?intercept' and responds with a fetch.
// ---

self.addEventListener('fetch', event => {
  if (event.request.url.indexOf('?intercept') != -1) {
    event.respondWith(fetch(event.request));
  }
});
