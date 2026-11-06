// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// META: --screen-info={800x600 label=1st}{600x800 label=2nd}

// ---docerion
// type: test
// title: Emulation.getScreenInfos test
// summary: Headless protocol test that configures two screens with different sizes and orientations and logs the results of the CDP Emulation.getScreenInfos API.
// ---

(async function(/** @type {import('test_runner').TestRunner} */ testRunner) {
  const {dp} =
      await testRunner.startBlank('Tests CDP Emulation.getScreenInfos() API.');

  const {screenInfos} = (await dp.Emulation.getScreenInfos()).result;
  testRunner.log(screenInfos, 'screenInfos: ');

  testRunner.completeTest();
});
