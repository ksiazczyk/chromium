// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Virtual time starvation test
// summary: Headless DevTools protocol test that sets a maximum virtual time task starvation count and verifies the budget expires so virtual time advances.
// ---

(async function(/** @type {import('test_runner').TestRunner} */ testRunner) {
  var {page, session, dp} = await testRunner.startBlank(`Tests that virtual time advances.`);
  await dp.Page.enable();
  await dp.Runtime.enable();

  // If there is no starvation, budget never expires.
  dp.Emulation.onVirtualTimeBudgetExpired(data => testRunner.completeTest());

  dp.Runtime.onConsoleAPICalled(data => {
    const text = data.params.args[0].value;
    testRunner.log(text);
  });

  await dp.Emulation.setVirtualTimePolicy({policy: 'pause'});
  await dp.Page.navigate({
      url: testRunner.url('resources/virtual-time-starvation.html')});
  dp.Emulation.setVirtualTimePolicy({
      policy: 'pauseIfNetworkFetchesPending', budget: 4011,
      maxVirtualTimeTaskStarvationCount: 100});
})
