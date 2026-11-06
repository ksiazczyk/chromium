// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker recording intercepted fetch URLs
// summary: Service worker that records the URLs of intercepted fetch requests and reports them back when messaged.
// ---

let urlsSeen = [];

self.addEventListener('fetch', e => {
  urlsSeen.push(e.request.url);
});

self.addEventListener('message', e => {
  e.source.postMessage(urlsSeen);
  urlsSeen = [];
});
