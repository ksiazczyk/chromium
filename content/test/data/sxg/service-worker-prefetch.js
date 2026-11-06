// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker prefetch test script
// summary: Test service worker that installs an empty fetch listener so prefetch requests are not intercepted.
// ---

self.addEventListener('fetch', (event) => {
});
