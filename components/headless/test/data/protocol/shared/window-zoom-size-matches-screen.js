// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// META: --screen-info={800x600 \
// META:   workAreaLeft=10 workAreaRight=90 workAreaTop=20 workAreaBottom=80}

// ---docerion
// type: test
// title: Window zoom size matches screen test
// summary: Protocol test that sets a window to maximized and fullscreen states and logs its bounds to check they match the workarea and screen.
// ---

(async function(/** @type {import('test_runner').TestRunner} */ testRunner) {
  const {dp} = await testRunner.startBlank(
      'Tests maximized and fullscreen window matches workarea and screen.');

  const {windowId} = (await dp.Browser.getWindowForTarget()).result;

  for (const state of ['maximized', 'fullscreen']) {
    await dp.Browser.setWindowBounds({windowId, bounds: {windowState: state}});

    const {bounds} = (await dp.Browser.getWindowBounds({windowId})).result;
    testRunner.log(`${bounds.left},${bounds.top} ${bounds.width}x${
        bounds.height} ${bounds.windowState}`);
  }

  testRunner.completeTest();
});
