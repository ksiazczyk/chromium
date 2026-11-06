// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Browser set proxy config sanity test
// summary: Sanity test that loads pages with no proxy, a self proxy, and another proxy server, dumping the page body text.
// ---

(async function(/** @type {import('test_runner').TestRunner} */ testRunner) {
  testRunner.log('Tests that headless session can configure proxy.\n');
  const { result: { sessionId } } =
      await testRunner.browserP().Target.attachToBrowserTarget({});
  const {protocol: bProtocol} = testRunner.createSessionFor(sessionId);

  async function dumpWithProxyServer(targetUrl, proxyServer) {
    const { result: { browserContextId } } =
        await bProtocol.Target.createBrowserContext({ proxyServer });
    const { result: { targetId }} =
        await bProtocol.Target.createTarget({
      browserContextId: browserContextId,
      url: 'about:blank'
    });

    const { result: { sessionId } } =
        await bProtocol.Target.attachToTarget({ targetId, flatten: true });
    const {protocol: pProtocol} = testRunner.createSessionFor(sessionId);
    await pProtocol.Page.enable({});
    await pProtocol.Page.navigate({ url: targetUrl });
    await pProtocol.Page.onceLoadEventFired();
    const { result: { result: { value } } } =
        await pProtocol.Runtime.evaluate(
            { expression: 'document.body.innerText' });
    return value;
  }

  testRunner.log(`No proxy: ${await dumpWithProxyServer(
      testRunner._testBaseURL + 'resources/body.html'
  )}`);

  testRunner.log(`Proxied to itself: ${await dumpWithProxyServer(
      testRunner._testBaseURL + 'resources/body.html',
      new URL(testRunner._targetBaseURL).host)}`);

  testRunner.log(`Proxied to another server: ${await dumpWithProxyServer(
      'http://not-an-actual-domain.tld/hello.html',
      testRunner.params('proxy'))}`);

  testRunner.completeTest();
})
