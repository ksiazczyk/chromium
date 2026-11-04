// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fullscreen video test helper script
// summary: JavaScript helper providing fullscreen request, video playback, and fullscreen error notification functions for WebView fullscreen video tests.
// ---

function goFullscreen(id) {
  var element = document.getElementById(id);
  if (element.webkitRequestFullScreen) {
    element.webkitRequestFullScreen();
  }
}

function playVideo() {
    document.getElementById('video').play();
}

addEventListener('DOMContentLoaded', function() {
    document.addEventListener('webkitfullscreenerror', function() {
        javaFullScreenErrorObserver.notifyJava();
    }, false);
}, false);

