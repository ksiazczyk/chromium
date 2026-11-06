// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: COEP credentialless MessagePort worker test script
// summary: Shared worker script served with credentialless COEP headers to test MessagePort transfer under that embedding policy.
// ---

onconnect = function(event) {
  var port = event.ports[0];
  port.postMessage("Worker connected.");
  port.onmessage = function(event2) {
    port.postMessage("Worker got a port.");
    var anotherport = event2.data.port;
    anotherport.start();
    anotherport.onmessage = function(event3) {
      anotherport.postMessage("Worker got a message via the passed port.");
    };
  };
}
