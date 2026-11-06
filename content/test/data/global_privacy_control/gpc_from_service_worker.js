// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker GPC reporting script
// summary: Service worker script that replies to messages with whether navigator.globalPrivacyControl is true.
// ---

async function handleMessage(e) {
  e.ports[0].postMessage(self.navigator.globalPrivacyControl === true);
}

self.addEventListener('message', e => {
  e.waitUntil(handleMessage(e));
});
