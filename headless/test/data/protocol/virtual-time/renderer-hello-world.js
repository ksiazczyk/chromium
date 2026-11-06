// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Renderer hello world virtual time test
// summary: Headless protocol test that loads a simple page under virtual time and logs its content, frames and scheduled navigations.
// ---

(async function(/** @type {import('test_runner').TestRunner} */ testRunner) {
  let {page, session, dp} =
      await testRunner.startWithFrameControl('Tests renderer: hello world.');

  let RendererTestHelper =
      await testRunner.loadScript('../helpers/renderer-test-helper.js');
  let {httpInterceptor, frameNavigationHelper, virtualTimeController} =
      await (new RendererTestHelper(testRunner, dp, page)).init();

  httpInterceptor.addResponse(
      `http://www.example.com/`,
      `<!doctype html><h1>Hello headless world!</h1>`);

  await virtualTimeController.initialize(1000);
  await frameNavigationHelper.navigate('http://www.example.com/');
  await virtualTimeController.grantTime(500);
  testRunner.log(await session.evaluate('document.body.innerHTML'));
  frameNavigationHelper.logFrames();
  frameNavigationHelper.logScheduledNavigations();
  testRunner.completeTest();
})
