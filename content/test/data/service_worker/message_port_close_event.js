// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker test script for message port close events
// summary: Service worker test script that starts a transferred message port and posts a reply when the port's close event fires.
// ---

onmessage = async (e) => {
  if (e.data == 'init') {
    self.port = e.ports[0];
    self.port.start();
  } else if (e.data == 'wait for close event') {
    self.port.onclose = () => {
      e.source.postMessage('close event is fired');
    }
  }
}
