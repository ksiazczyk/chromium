// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bouncing balls background drawn as image
// summary: Drawing variant that draws the background image directly, scaled to the canvas size.
// ---

var backImage;

function prepareBackground() {
  backImage = document.getElementById('backImage');
}

function drawBackground() {
  canvasContext.drawImage(backImage, 0, 0, canvasWidth, canvasHeight);
}
