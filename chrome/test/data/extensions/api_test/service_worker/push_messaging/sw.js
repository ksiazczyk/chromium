// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Push messaging service worker script
// summary: Service worker that waits for a message channel from the page and forwards received push message data back to complete the test.
// ---

let port;
let pushData;

function maybeFinish() {
  if (port && pushData) {
    port.postMessage(pushData);
  }
}

this.onpush = function(e) {
  pushData = e.data.text();
  maybeFinish();
};

this.onmessage = function(e) {
  if (e.data === 'waitForPushMessaging') {
    port = e.ports[0];
    maybeFinish();
  }
};
