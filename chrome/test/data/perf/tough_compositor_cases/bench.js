// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Bench animation loop helper for compositor tests
// summary: Provides a requestAnimationFrame-based animation loop helper that benchmark pages use to run a draw function every frame.
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
