// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// META: --ozone-override-screen-size=1234,5678
//

// ---docerion
// type: test
// title: Ozone screen size override protocol test
// summary: Headless protocol sanity test that verifies the Ozone screen size override flag reports the overridden screen dimensions.
// ---

(async function(testRunner) {
  const {session} =
      await testRunner.startBlank(`Tests Ozone screen size override.`);

  const screenSize =
      await session.evaluate('`${screen.width}x${screen.height}`');
  testRunner.log('Screen size: ' + screenSize);

  testRunner.completeTest();
})
