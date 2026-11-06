// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Injected communication channel test helper
// summary: Test page script that listens for messages from an embedder and reports back a successful connection.
// ---

// eslint-disable-next-line no-var
var embedder = null;

function reportConnected() {
  const msg = ['connected'];
  embedder.postMessage(JSON.stringify(msg), '*');
}

window.addEventListener('message', function(e) {
  embedder = e.source;
  const data = JSON.parse(e.data);
  switch (data[0]) {
    case 'connect':
      reportConnected();
      break;
    default:
      break;
  }
});
