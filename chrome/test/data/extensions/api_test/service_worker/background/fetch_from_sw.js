// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fetch from service worker handler
// summary: Service worker message handler that fetches hello.txt and posts the retrieved text back over a port.
// ---

'use strict';

self.onmessage = function(e) {
  fetch('hello.txt').then(res => res.text()).then(text => {
    e.data.port.postMessage(text.trim());
  });
};
