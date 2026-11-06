// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fetch event pass-through service worker
// summary: Service worker test script that records URLs of fetched requests and reports them via postMessage.
// ---

var saw_requests = [];

self.addEventListener('fetch', event => {
  saw_requests.push(event.request.url);
});

self.addEventListener('message', event => {
  event.source.postMessage(saw_requests);
});
