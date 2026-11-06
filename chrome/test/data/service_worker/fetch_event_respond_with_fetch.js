// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker responding to fetch events with fetch
// summary: Test service worker that answers every fetch event by responding with a fetch of the original request.
// ---

self.onfetch = event => {
  event.respondWith(fetch(event.request));
};
