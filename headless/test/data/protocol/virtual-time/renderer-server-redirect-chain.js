// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Renderer server redirect chain test
// summary: Headless protocol test that follows a chain of server 301 and 302 redirects under virtual time and logs the resulting page body.
// ---

(async function(/** @type {import('test_runner').TestRunner} */ testRunner) {
  let {page, session, dp} = await testRunner.startWithFrameControl(
      'Tests renderer: server redirection chain.');

  let RendererTestHelper =
      await testRunner.loadScript('../helpers/renderer-test-helper.js');
  let {httpInterceptor, frameNavigationHelper, virtualTimeController} =
      await (new RendererTestHelper(testRunner, dp, page)).init();

  httpInterceptor.addResponse(
      'http://www.example.com/', null,
      ['HTTP/1.1 302 Found', 'Location: http://www.example.com/1']);

  httpInterceptor.addResponse(
      'http://www.example.com/1', null,
      ['HTTP/1.1 301 Moved', 'Location: http://www.example.com/2']);

  httpInterceptor.addResponse(
      'http://www.example.com/2', null,
      ['HTTP/1.1 302 Found', 'Location: http://www.example.com/3']);

  httpInterceptor.addResponse('http://www.example.com/3', '<p>Pass</p>');

  await virtualTimeController.initialize(1000);
  await frameNavigationHelper.navigate('http://www.example.com/');
  await virtualTimeController.grantTime(1000);

  testRunner.log(await session.evaluate('document.body.innerHTML'));
  testRunner.completeTest();
})
