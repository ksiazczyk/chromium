// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// META: --screen-info={600x800}

// ---docerion
// type: test
// title: updateScreen portrait rotation protocol test
// summary: Protocol browser test that rotates a portrait screen through 0, 90, 180 and 270 degrees via CDP Emulation.updateScreen() and logs the orientation changes.
// ---

(async function(/** @type {import('test_runner').TestRunner} */ testRunner) {
  const {dp} = await testRunner.startBlank(
      'Tests CDP Emulation.updateScreen() API portrait rotation handling.');

  async function getScreenId(index) {
    const {screenInfos} = (await dp.Emulation.getScreenInfos()).result;
    return screenInfos[index].id;
  }

  const screenId = await getScreenId(0);

  for (const rotation of [0, 90, 180, 270]) {
    const {screenInfo} = (await dp.Emulation.updateScreen({
                           screenId,
                           rotation,
                         })).result;
    testRunner.log(screenInfo, `Rotation=${rotation} degrees screen info: `);
  }

  testRunner.completeTest();
});
