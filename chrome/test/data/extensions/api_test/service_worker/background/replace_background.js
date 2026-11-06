// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker fetch interception replacing background.js
// summary: Service worker test script that intercepts fetches for /background.js and serves replacement code with an onMessage listener.
// ---

'use strict';

const backgroundJS =
    `chrome.runtime.onMessage.addListener(function(msg, _, sendResponse) {
     if (msg.sourceCheck) {
       sendResponse({label: 'onMessage/SW BG.'});
     }
   });`;

self.onfetch = function(e) {
  const requestUrl = new URL(e.request.url);
  if (requestUrl.pathname === '/background.js') {
    e.respondWith(new Response(backgroundJS));
  }
};
