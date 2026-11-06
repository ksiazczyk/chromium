// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker with empty fetch handler
// summary: Service worker that listens for fetch events without responding to them, used in signed exchange test scenarios.
// ---

self.addEventListener('fetch', (event) => {
});
