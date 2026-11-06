// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Autoplay hosted app test script
// summary: Test script that loads an autoplay iframe guest page, sends a start message, and resolves based on whether autoplay succeeded or was unsupported.
// ---

function runTest() {
  const guestUrl = '/extensions/autoplay_iframe/frame.html';

  const iframe = document.querySelector('iframe');
  return new Promise(resolve => {
    iframe.addEventListener('load', function() {
      window.addEventListener('message', (e) => {
        resolve(('autoplayed' === e.data || 'NotSupportedError' === e.data));
      }, {once: true});

      iframe.contentWindow.postMessage('start', '*');
    }, {once: true});

    iframe.src = guestUrl;
  });
}
