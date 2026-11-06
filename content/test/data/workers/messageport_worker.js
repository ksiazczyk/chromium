// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MessagePort shared worker test script
// summary: Shared worker script that confirms connection and echoes messages received via a MessagePort transferred from the page.
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
