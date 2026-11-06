// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Injected script reporting resize events to the embedder
// summary: Injected guest-side script that posts body dimensions to the embedder when a resize event fires.
// ---

window.addEventListener('resize', function(e) {
  if (!embedder) {
    return;
  }
  const msg = ['resize', document.body.clientWidth, document.body.clientHeight];
  embedder.postMessage(JSON.stringify(msg), '*');
});
