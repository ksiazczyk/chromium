// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bouncing balls background drawn as white fill
// summary: Drawing variant that fills the background with solid white each frame.
// ---

function prepareBackground() {
}

function drawBackground() {
  canvasContext.save();
  canvasContext.fillStyle = "#FFFFFF";
  canvasContext.fillRect(0, 0, canvasWidth, canvasHeight);
  canvasContext.restore();
}
