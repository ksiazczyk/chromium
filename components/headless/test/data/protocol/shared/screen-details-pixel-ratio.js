// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// META: --screen-info={devicePixelRatio=3.0}

// ---docerion
// type: test
// title: Screen details pixel ratio test
// summary: Headless protocol test that emulates a device pixel ratio of 3 and checks screens report it via getScreenDetails.
// ---

(async function(/** @type {import('test_runner').TestRunner} */ testRunner) {
  const {session, dp} =
      await testRunner.startBlank('Tests screen details device pixel ratio.');

  const HttpInterceptor =
      await testRunner.loadScriptAbsolute('../resources/http-interceptor.js');
  const httpInterceptor = await (new HttpInterceptor(testRunner, dp)).init();
  httpInterceptor.setDisableRequestedUrlsLogging(true);

  httpInterceptor.addResponse(
      'https://example.com/index.html', `<html></html>`);

  await dp.Browser.grantPermissions({permissions: ['windowManagement']});

  await session.navigate('https://example.com/index.html');

  const result = await session.evaluateAsync(async () => {
    const screenDetails = await getScreenDetails();
    const screenInfos = screenDetails.screens.map(
        s => `devicePixelRatio=${s.devicePixelRatio}`);
    return screenInfos.join('\n');
  });

  testRunner.log(result);

  testRunner.completeTest();
});
