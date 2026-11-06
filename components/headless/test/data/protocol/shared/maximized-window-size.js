// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// META: --screen-info={1600x1200}
//

// ---docerion
// type: test
// title: Maximized window size protocol test
// summary: Headless protocol test that resizes, maximizes and restores a browser window while logging its bounds and window state.
// ---

(async function(/** @type {import('test_runner').TestRunner} */ testRunner) {
  const {dp} =
      await testRunner.startBlank(`Tests maximized browser window size.`);

  await dp.Page.enable();

  const {windowId} = (await dp.Browser.getWindowForTarget()).result;

  async function logWindowBounds() {
    const {bounds} = (await dp.Browser.getWindowBounds({windowId})).result;
    testRunner.log(`${bounds.left},${bounds.top} ${bounds.width}x${
        bounds.height} ${bounds.windowState}`);
  }

  // Set normal window size to non default width and height thus ensuring
  // frame resized notification.
  await dp.Browser.setWindowBounds(
      {windowId, bounds: {left: 10, top: 20, width: 810, height: 620}});
  await dp.Page.onceFrameResized();
  await logWindowBounds();

  // Maximize window.
  await dp.Browser.setWindowBounds(
      {windowId, bounds: {windowState: 'maximized'}});
  await dp.Page.onceFrameResized();
  await logWindowBounds();

  // Restore window.
  await dp.Browser.setWindowBounds({windowId, bounds: {windowState: 'normal'}});
  await dp.Page.onceFrameResized();
  await logWindowBounds();

  testRunner.completeTest();
});
