// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: User agent reporting service worker
// summary: Service worker test fixture that responds to requests containing user_agent_sw with the value of navigator.userAgent.
// ---

self.addEventListener('fetch', (event) => {
  // Responds to requests containing "user_agent_sw" with the value of
  // navigator.userAgent.
  if (event.request.url.includes('user_agent_sw')) {
    event.respondWith(new Response(navigator.userAgent));
  }
});
