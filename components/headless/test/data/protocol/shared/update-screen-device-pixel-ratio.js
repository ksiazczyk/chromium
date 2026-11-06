// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// META: --screen-info={2000x1000 \
// META:   workAreaLeft=10 workAreaRight=20 workAreaTop=30 workAreaBottom=40}

// ---docerion
// type: test
// title: updateScreen device pixel ratio protocol test
// summary: Protocol browser test that uses CDP Emulation.updateScreen() to set a screen's device pixel ratio to 2 and logs the resulting screen info.
// ---

(async function(/** @type {import('test_runner').TestRunner} */ testRunner) {
  const {dp} = await testRunner.startBlank(
      'Tests CDP Emulation.updateScreen() API device pixel ratio handling.');

  async function getScreenId(index) {
    const {screenInfos} = (await dp.Emulation.getScreenInfos()).result;
    return screenInfos[index].id;
  }

  const screenId = await getScreenId(0);

  const {screenInfo} =
      (await dp.Emulation.updateScreen({screenId, devicePixelRatio: 2})).result;

  testRunner.log(screenInfo, 'Updated screen info: ');

  testRunner.completeTest();
});
