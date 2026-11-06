// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker failing on variations header
// summary: Service worker test script that responds with an error to requests carrying the X-Client-Data variations header.
// ---

self.addEventListener('fetch', event => {
  const req = event.request;
  if (req.headers.has('X-Client-Data'))
    event.respondWith(Response.error());
});
