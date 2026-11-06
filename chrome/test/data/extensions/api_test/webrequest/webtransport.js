// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebTransport session test helpers
// summary: Helpers that check whether a WebTransport session is established or fails with a WebTransportError during webRequest API tests.
// ---

async function expectSessionEstablished(url) {
  const transport = new WebTransport(url);
  try {
    await transport.ready;
  } catch (e) {
    chrome.test.fail(`Ready rejected: ${e}`);
  }
}

async function expectSessionFailed(url) {
  const transport = new WebTransport(url);
  let established = false;
  try {
    await transport.ready;
    established = true;
  } catch (e) {
    chrome.test.assertEq(e.name, 'WebTransportError');
  }
  chrome.test.assertFalse(established);
}
