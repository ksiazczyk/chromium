// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// META: --screen-info={800x600}

// ---docerion
// type: test
// title: updateScreen label protocol test
// summary: Protocol browser test that sets a screen's label to FooBar via CDP Emulation.updateScreen() and logs the resulting screen info.
// ---

(async function(/** @type {import('test_runner').TestRunner} */ testRunner) {
  const {dp} = await testRunner.startBlank(
      'Tests CDP Emulation.updateScreen() API label handling.');

  async function getScreenId(index) {
    const {screenInfos} = (await dp.Emulation.getScreenInfos()).result;
    return screenInfos[index].id;
  }

  const screenId = await getScreenId(0);

  const {screenInfo} =
      (await dp.Emulation.updateScreen({screenId, label: 'FooBar'})).result;

  testRunner.log(screenInfo, 'Updated screen info: ');

  testRunner.completeTest();
});
