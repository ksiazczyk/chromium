// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// META: --screen-info={800x600 label=1st}

// ---docerion
// type: test
// title: Add and remove screen protocol test
// summary: Protocol test that exercises the CDP Emulation.addScreen and removeScreen APIs and logs screen information before and after removal.
// ---

(async function(/** @type {import('test_runner').TestRunner} */ testRunner) {
  const {dp} = await testRunner.startBlank(
      'Tests CDP Emulation.add|removeScreen() APIs.');

  const {screenInfo} =
      (await dp.Emulation.addScreen(
           {left: 800, top: 0, width: 600, height: 800, label: '2nd'}))
          .result;

  testRunner.log(screenInfo, 'Added screen info: ');

  testRunner.log(
      (await dp.Emulation.getScreenInfos()).result,
      'Screens before the added screen is removed: ');

  await dp.Emulation.removeScreen({screenId: screenInfo.id});

  testRunner.log(
      (await dp.Emulation.getScreenInfos()).result,
      'Screens after the added screen is removed: ');

  testRunner.completeTest();
});
