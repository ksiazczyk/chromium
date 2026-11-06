// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Post message to background client test helper
// summary: Test helper that finds the extension background page among window clients and posts a 'success' message to it.
// ---

'use strict';

(async () => {
  const foundClients =
      await clients.matchAll({includeUncontrolled: true, type: 'window'});
  const background = foundClients.find((client) => {
    return new URL(client.url).pathname === '/background.html';
  });
  background.postMessage('success');
})();
