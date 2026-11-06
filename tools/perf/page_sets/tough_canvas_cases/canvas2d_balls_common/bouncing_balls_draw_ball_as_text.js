// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bouncing balls canvas benchmark drawing ball as text
// summary: Defines drawBall functions that render each ball as scaled 'Chrome' text for the tough canvas bouncing balls performance test pages.
// ---

var ballScale;

function drawBallInit(diameter) {
  var metrics = canvasContext.measureText("Chrome");
  ballScale = diameter/metrics.width
}

function drawBall(x, y, angle) {
  canvasContext.save();
  canvasContext.fillStyle = 'blue';
  canvasContext.translate(x, y);
  canvasContext.rotate(angle);
  canvasContext.scale(ballScale, ballScale);
  canvasContext.textAlign = "center";
  canvasContext.fillText("Chrome", 0, 0);
  canvasContext.restore();
}
