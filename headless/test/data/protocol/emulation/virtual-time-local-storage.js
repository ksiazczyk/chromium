// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Virtual time local storage test
// summary: Protocol test that runs a local storage page under a virtual time budget and logs the page's console output.
// ---

(async function(/** @type {import('test_runner').TestRunner} */ testRunner) {
  const  {page, session, dp} = await testRunner.startBlank(
      `Tests virtual time with local storage.`);
  await dp.Runtime.enable();

  dp.Runtime.onConsoleAPICalled(data => {
    const text = data.params.args[0].value;
    testRunner.log(text);
  });

  await dp.Emulation.setVirtualTimePolicy({policy: 'pause'});
  await dp.Page.navigate({
      url: testRunner.url('resources/virtual-time-local-storage.html')});
  dp.Emulation.setVirtualTimePolicy({
      policy: 'pauseIfNetworkFetchesPending',
      budget: 5000});
  await dp.Emulation.onceVirtualTimeBudgetExpired();
  testRunner.completeTest();
})
