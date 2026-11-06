// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Throttling non-blocking service worker
// summary: Service worker test fixture that fetches three non-blocking resources during installation for throttling tests.
// ---

self.addEventListener('install', evt => {
  evt.waitUntil(async function() {
    return Promise.all([
      fetch('./foo/1').then(r => r.blob()),
      fetch('./foo/2').then(r => r.blob()),
      fetch('./foo/3').then(r => r.blob()),
    ]);
  }());
});
