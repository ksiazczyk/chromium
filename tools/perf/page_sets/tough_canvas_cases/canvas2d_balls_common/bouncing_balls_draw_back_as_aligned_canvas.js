// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bouncing balls background drawn as aligned canvas
// summary: Drawing variant that pre-renders the background image to a viewport-sized canvas and blits it each frame.
// ---

var backImageCanvas;

function prepareBackground() {
  var backImage = document.getElementById('backImage');
  backImageCanvas = document.createElement('canvas');
  backImageCanvas.width = canvasWidth;
  backImageCanvas.height = canvasHeight;
  var backContext = backImageCanvas.getContext('2d');
  backContext.drawImage(backImage, 0, 0, canvasWidth, canvasHeight);
}

function drawBackground() {
  canvasContext.drawImage(backImageCanvas, 0, 0);
}
