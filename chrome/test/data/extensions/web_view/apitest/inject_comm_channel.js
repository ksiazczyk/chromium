// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Injected script providing a postMessage communication channel
// summary: Injected guest-side script that listens for messages and reports a connected status back to the embedder.
// ---

let embedder = null;

function reportConnected() {
  const msg = ['connected'];
  embedder.postMessage(JSON.stringify(msg), '*');
}

window.addEventListener('message', function(e) {
  embedder = e.source;
  const data = JSON.parse(e.data);
  switch (data[0]) {
    case 'connect': {
      reportConnected();
      break;
    }
    default: {
      console.error('Unexpected message: \'' + data[0] + '\'');
      break;
    }
  }
});
