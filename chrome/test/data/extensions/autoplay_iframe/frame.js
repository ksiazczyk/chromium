// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Autoplay test frame script
// summary: Creates an audio element playing test.mp4 when messaged and reports whether autoplay succeeded or the error name to the top window.
// ---

window.addEventListener('message', function() {
  const audio = document.createElement('audio');
  audio.src = 'test.mp4';
  audio.play().then(
      () => {
        top.postMessage('autoplayed', '*');
      },
      e => {
        top.postMessage(e.name, '*');
      });
});
