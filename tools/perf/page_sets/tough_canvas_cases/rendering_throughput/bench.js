// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Canvas benchmark animation runner
// summary: Runs a canvas draw function in a requestAnimationFrame loop to drive the rendering throughput benchmark pages.
// ---

var bench = (function() {
  var rafFunc;
  var drawFunc;

  function tick() {
    drawFunc();
    rafFunc(tick);
  };

  function startAnimation() {
    rafFunc = window.requestAnimationFrame ||
              window.webkitRequestAnimationFrame ||
              window.mozRequestAnimationFrame ||
              window.oRequestAnimationFrame ||
              window.msRequestAnimationFrame;
    rafFunc(tick);
  };

  var bench = {};
  bench.run = function(df) {
    drawFunc = df;
    startAnimation();
  };
  return bench;
})();
