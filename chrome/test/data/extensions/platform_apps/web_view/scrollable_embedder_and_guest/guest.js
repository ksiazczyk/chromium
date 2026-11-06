// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Guest page script handling embedder messages
// summary: Script for the guest page that connects to the embedder and sets the root overflow to hidden when the set_overflow_hidden app command arrives.
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

window.onAppCommand = function(command) {
  LOG('guest::onAppCommand: ' + command);
  switch (command) {
    case 'set_overflow_hidden':
      document.getElementById('root').style.overflow = 'hidden';
      sendMessageToEmbedder('overflow_is_hidden');
      break;
  };
};

window.addEventListener('message', function(e) {
  embedder = e.source;
  var data = JSON.parse(e.data);
  if (data[0] == 'connect') {
    sendMessageToEmbedder('connected');
  }
});
