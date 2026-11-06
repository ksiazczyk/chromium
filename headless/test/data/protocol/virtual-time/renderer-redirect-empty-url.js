// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Redirect with empty URL virtual time test
// summary: Headless browser test verifying renderer behavior when a 302 redirect has an empty Location header, run under virtual time control.
// ---

(async function(/** @type {import('test_runner').TestRunner} */ testRunner) {
  let {page, session, dp} = await testRunner.startWithFrameControl(
      'Tests renderer: redirect empty url.');

  let RendererTestHelper =
      await testRunner.loadScript('../helpers/renderer-test-helper.js');
  let {httpInterceptor, frameNavigationHelper, virtualTimeController} =
      await (new RendererTestHelper(testRunner, dp, page)).init();

  httpInterceptor.addResponse(
      'http://www.example.com/', `<!DOCTYPE html><p>Pass</p>`,
      ['HTTP/1.1 302 Found', 'Location: ', 'Content-Type: text/html']);

  await virtualTimeController.initialize(1000);
  await frameNavigationHelper.navigate('http://www.example.com/');
  await virtualTimeController.grantTime(1000);

  testRunner.log(await session.evaluate('document.body.innerHTML'));
  testRunner.completeTest();
})
