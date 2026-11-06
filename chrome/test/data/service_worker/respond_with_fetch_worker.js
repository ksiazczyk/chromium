// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Respond-with-fetch service worker test script
// summary: Service worker test fixture that answers fetch events by responding with a fetch of the same request.
// ---

self.addEventListener('fetch', event => {
  event.respondWith(fetch(event.request));
});
