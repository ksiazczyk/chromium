// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fetch pass-through service worker
// summary: Service worker test fixture that records fetch request URLs and reports them back on message.
// ---

var saw_requests = [];

self.addEventListener('fetch', event => {
  saw_requests.push(event.request.url);
});

self.addEventListener('message', event => {
  event.source.postMessage(saw_requests);
});
