// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bouncing balls canvas benchmark drawing ball as image with shadow
// summary: Defines drawBall functions that render each ball as an image with a shadow for the tough canvas bouncing balls performance test pages.
// ---

var ballImage;
var ballRadius;

function drawBallInit(diameter) {
  ballRadius = diameter / 2;
  ballImage = document.getElementById('ballImage');
}

function drawBall(x, y, angle) {
  canvasContext.save();
  canvasContext.shadowColor = 'black';
  canvasContext.shadowOffsetX = -ballRadius;
  canvasContext.shadowOffsetY = ballRadius;
  canvasContext.shadowBlur = ballRadius;
  canvasContext.translate(x, y);
  canvasContext.rotate(angle);
  canvasContext.drawImage(ballImage, -ballRadius, -ballRadius, ballDiameter,
      ballDiameter);
  canvasContext.restore();
}
