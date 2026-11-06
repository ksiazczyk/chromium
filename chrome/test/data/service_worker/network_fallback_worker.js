// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Network fallback service worker test script
// summary: Service worker test fixture whose fetch handler falls back to the network, used in Chromium browser tests.
// ---

self.addEventListener('fetch', event => {
  // Fall back to network.
});
