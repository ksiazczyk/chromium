// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bouncing balls drawn as filled path
// summary: Ball drawing variant that draws each ball as a filled polygon path shaded with a radial gradient.
// ---

var ballRadius;
var ballGradient;
var segmentCount = 20;

function drawBallInit(diameter) {
  ballRadius = diameter / 2;
  ballGradient = canvasContext.createRadialGradient(0, 0, 0, 0, 0, ballRadius);
  ballGradient.addColorStop(0, "#4040FF");
  ballGradient.addColorStop(1, "#00FF40");
}

function drawBall(x, y, angle) {
  canvasContext.save();
  canvasContext.fillStyle = ballGradient;
  canvasContext.translate(x, y);
  canvasContext.rotate(angle);
  canvasContext.beginPath();
  canvasContext.moveTo(ballRadius, 0);
  for (var i = 1; i < segmentCount; ++i) {
    var angle = i * 2.0 * Math.PI / segmentCount;
    canvasContext.lineTo(ballRadius*Math.cos(angle),
        ballRadius*Math.sin(angle));
  }
  canvasContext.fill();
  canvasContext.closePath();
  canvasContext.restore();
}
