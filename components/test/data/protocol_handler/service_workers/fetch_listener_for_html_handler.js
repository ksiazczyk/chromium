// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker fetch listener for HTML handler tests
// summary: Service worker script that intercepts fetches for handler.html and responds with HTML that reports the request was handled by the service worker.
// ---

self.addEventListener('fetch', function(event) {
  if (!event.request.url.includes('handler.html')) {
    return;
  }

  event.respondWith(new Response(
      `<script>
window.opener.postMessage({handled_by_service_worker: true}, '*');</script>`,
      {headers: {'Content-Type': 'text/html'}}));
});
