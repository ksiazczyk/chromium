// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bouncing balls canvas benchmark drawing ball as rectangle
// summary: Defines drawBall functions that render each ball as a filled blue rectangle for the tough canvas bouncing balls performance test pages.
// ---

var ballRadius;

function drawBallInit(diameter) {
  ballRadius = diameter / 2;
}

function drawBall(x, y, angle) {
  canvasContext.save();
  canvasContext.fillStyle = 'blue';
  canvasContext.translate(x, y);
  canvasContext.rotate(angle);
  canvasContext.fillRect(-ballRadius, -ballRadius, ballDiameter, ballDiameter);
  canvasContext.restore();
}
