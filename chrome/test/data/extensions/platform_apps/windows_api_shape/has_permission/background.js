// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Window shape test background script
// summary: Runs chrome.app.window tests that set window shapes using single, multiple, empty, and null rect regions.
// ---

function testWindowShape(testId, region) {
  var createOptions = { id: testId, frame: 'none' };

  chrome.app.window.create('index.html',
                           createOptions,
                           chrome.test.callbackPass(function(win) {
      win.setShape(region)
  }));
}

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.test.runTests([

    // Window shape is a single rect.
    function testWindowShapeSingleRect() {
      testWindowShape('testWindowShapeSingleRect',
                      {rects: [{left:100, top:50, width:50, height:100}]});
    },

    // Window shape is multiple rects.
    function testWindowShapeMultipleRects() {
      testWindowShape('testWindowShapeMultipleRects',
                      {rects: [{left:100, top:50, width:50, height:100},
                               {left:200, top:100, width:50, height:50}]});
    },

    // Window shape is null.
    function testWindowShapeNull() {
      testWindowShape('testWindowShapeNull', {});
    },

    // Window shape is empty.
    function testWindowShapeEmpty() {
      testWindowShape('testWindowShapeEmpty', {rects: []});
    },

  ]);
});
