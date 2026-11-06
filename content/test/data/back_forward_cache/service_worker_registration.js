// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker claim-on-message script
// summary: Service worker test helper that claims all clients when it receives a message.
// ---

self.addEventListener('message', async e => {
  e.waitUntil(self.clients.claim());
});
