// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Guest-side messaging script for the webview focus test
// summary: Guest script that creates a blob object URL, receives the embedder's connect message, and replies with connected via postMessage.
// ---

var LOG = function(msg) {
  window.console.log(msg);
};

var embedder;

function sendMessageToEmbedder(message) {
  if (!embedder) {
    LOG('no embedder channel to send postMessage');
    return;
  }
  embedder.postMessage(JSON.stringify([message]), '*');
}

window.addEventListener('message', function(e) {
  URL.createObjectURL(new Blob([]));
  embedder = e.source;
  var data = JSON.parse(e.data);
  if (data[0] == 'connect') {
    sendMessageToEmbedder('connected');
  }
});
