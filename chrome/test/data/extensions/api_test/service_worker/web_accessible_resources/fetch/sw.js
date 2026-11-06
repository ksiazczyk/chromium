// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker that intercepts test fetch requests
// summary: Service worker that responds to data_for_extension requests with 'SW served data' and handles claim messages from the page.
// ---

self.onfetch = function(e) {
  const url = new URL(e.request.url);
  if (url.pathname === '/data_for_extension') {
    e.respondWith(new Response('SW served data'));
  }
};

self.onmessage = function(e) {
  const request = e.data;
  switch (request) {
    case 'claim':
      self.clients.claim()
          .then(function() {
            e.ports[0].postMessage('clients claimed');
          })
          .catch(function(err) {
            e.ports[0].postMessage(`FAIL${err}`);
          });
      break;
    default:
      e.ports[0].postMessage('FAIL: Incorrect request.');
      break;
  }
};
