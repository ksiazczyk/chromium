// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Navigation e2e fullscreen helper
// summary: Helper for WebXR navigation end-to-end tests that toggles fullscreen and signals the test step when the fullscreen change event fires.
// ---

function setFullscreen(checkbox) {
  if (checkbox.checked) {
    document.body.webkitRequestFullScreen();
  } else {
    document.webkitCancelFullScreen();
  }
}
function onFullscreenChange() {
  finishJavaScriptStep();
}
document.addEventListener('webkitfullscreenchange', onFullscreenChange, false);
