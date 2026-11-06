// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Shared helpers for protocol handler extension API tests
// summary: Provides shared constants and URL helpers, such as the same-origin handler URL and cross-origin localhost URL builder, used by the protocol handler browser tests.
// ---

const SAME_ORIGIN_CHROME_EXTENSION_URL =
    chrome.runtime.getURL('handler.html?protocol=%s');

function crossOriginLocalhostURLFromPort(port) {
  return `http://localhost:${port}/extensions/api_test/protocol_handler/`;
}

const TITLE = 'register protocol handler title';
