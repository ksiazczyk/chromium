// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker redirecting to data URLs
// summary: 'Service worker test fixture that responds to fetch events with a redirect to a data: URL.'
// ---

self.addEventListener('fetch', event => {
  event.respondWith(Response.redirect(
    'data:text/html,<script>console.log("data")</script>'));
});
