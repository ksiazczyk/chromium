// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// META: --screen-info={800x600 label=1st}

// ---docerion
// type: test
// title: Add screen scale factor protocol test
// summary: Protocol test that adds a screen with devicePixelRatio 2 via CDP Emulation.addScreen and logs the resulting screen information.
// ---

(async function(/** @type {import('test_runner').TestRunner} */ testRunner) {
  const {dp} = await testRunner.startBlank(
      'Tests CDP Emulation.addScreen() API with scale factor.');

  // Add a screen at the right of the primary screen.
  const result = (await dp.Emulation.addScreen({
                   left: 800,
                   top: 0,
                   width: 800,
                   height: 600,
                   label: '2nd',
                   devicePixelRatio: 2.0,
                 })).result;
  testRunner.log(result, 'Added screen: ');

  testRunner.log((await dp.Emulation.getScreenInfos()).result);

  testRunner.completeTest();
});
