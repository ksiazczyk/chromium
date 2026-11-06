// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bouncing balls background drawn as canvas
// summary: Drawing variant that keeps the background image in a natural-size canvas and scales it to the viewport on each draw.
// ---

var backImageCanvas;

function prepareBackground() {
  var backImage = document.getElementById('backImage');
  backImageCanvas = document.createElement('canvas');
  backImageCanvas.width = backImage.naturalWidth;
  backImageCanvas.height = backImage.naturalHeight;
  var backContext = backImageCanvas.getContext('2d');
  backContext.drawImage(backImage, 0, 0);
}

function drawBackground() {
  canvasContext.drawImage(backImageCanvas, 0, 0, canvasWidth, canvasHeight);
}
