// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Injected script answering visibilityState requests
// summary: Injected guest-side script that replies to visibilityState requests with the document visibility state.
// ---

window.addEventListener('message', function(e) {
  let response = '';
  const data = JSON.parse(e.data);

  if (data[0] === 'visibilityState-request') {
    response = document.visibilityState;
  } else {
    response = 'FAILED';
  }

  e.source.postMessage(
      JSON.stringify(['visibilityState-response', response]), '*');
});
