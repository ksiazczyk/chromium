// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker fetch respondWith fetch handler
// summary: Service worker test fixture that answers fetch events by re-fetching the original request.
// ---

self.addEventListener('fetch', e => { e.respondWith(fetch(e.request)) });
