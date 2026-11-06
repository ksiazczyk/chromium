// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Injected resize test script
// summary: Injected guest script that posts body client dimensions to the embedder when resize events fire.
// ---

window.addEventListener('resize', function(e) {
  if (!embedder) {
    return;
  }
  var msg = ['resize', document.body.clientWidth, document.body.clientHeight];
  embedder.postMessage(JSON.stringify(msg), '*');
});
