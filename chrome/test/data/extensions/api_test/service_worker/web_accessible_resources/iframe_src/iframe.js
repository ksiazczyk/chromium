// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Iframe message handler replying to pings
// summary: Listens for postMessage pings and replies with FROM_EXTENSION_RESOURCE to verify resources served by the extension.
// ---

window.onmessage = function(e) {
  if (e.data === 'ping') {
    e.source.postMessage('FROM_EXTENSION_RESOURCE', '*');
  }
};
