// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Guest autoplay script
// summary: Creates an audio element playing test.mp4 on message and logs whether autoplay succeeded or was blocked.
// ---

window.addEventListener('message', function() {
  var audio = document.createElement('audio');
  audio.src = 'test.mp4';
  audio.play().then(() => {
    console.log('autoplayed');
  }, e => {
    console.log(e.name);
  });
});
