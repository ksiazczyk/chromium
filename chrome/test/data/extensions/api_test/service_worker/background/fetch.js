// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker fetch handler
// summary: Service worker fetch handler that responds to requests with a message containing the caught URL pathname.
// ---

'use strict';

self.onfetch = function(event) {
  const url = new URL(event.request.url);
  event.respondWith(new Response(`Caught a fetch for ${url.pathname}`));
};
