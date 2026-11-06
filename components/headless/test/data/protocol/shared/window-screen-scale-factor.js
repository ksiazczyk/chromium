// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// META: --screen-info={devicePixelRatio=3.0}

// ---docerion
// type: test
// title: Window screen scale factor test
// summary: Protocol test verifying that window.devicePixelRatio matches the devicePixelRatio of the simulated screen.
// ---

(async function(/** @type {import('test_runner').TestRunner} */ testRunner) {
  const {session, dp} =
      await testRunner.startBlank('Tests window screen scale factor.');

  const result = await session.evaluate('window.devicePixelRatio');
  testRunner.log('devicePixelRatio=' + result);

  testRunner.completeTest();
});
