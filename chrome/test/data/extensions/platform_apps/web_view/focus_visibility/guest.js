// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Guest script reporting button focus and keyup events to embedder
// summary: Notifies the embedder when the guest button receives focus or a keyup occurs, and handles connect and reset messages from the embedder.
// ---

'use strict';

var embedder = null;

function onButtonReceivedFocus(e) {
  embedder.postMessage('focus-event', '*');
}

function onWindowMessage(e) {
  switch (e.data) {
    case 'connect':
      embedder = e.source;
      embedder.postMessage('connected', '*');
      break;
    case 'reset':
      embedder.postMessage('reset-complete', '*');
      break;
  }
}

function onLoad() {
  document.querySelector('button').onfocus = onButtonReceivedFocus;
}

window.addEventListener('message', onWindowMessage);
window.addEventListener('load', onLoad);
window.addEventListener('keyup', function() {
  embedder.postMessage('guest-keyup', '*');
});
