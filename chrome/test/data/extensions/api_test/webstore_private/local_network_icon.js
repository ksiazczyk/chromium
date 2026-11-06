// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Local network icon URL regression test
// summary: Regression test that an iconUrl resolving to a local network address is blocked, failing the install with an icon error instead of probing internal hosts.
// ---

// Regression test: an `iconUrl` (via the `icon_url` query param) that resolves
// to a local network address must be blocked by the browser-process icon fetch,
// so the install fails with an icon error instead of probing internal hosts.
const tests = [
  function IconUrlToLocalNetworkAddressIsBlocked() {
    const manifest = getManifest();
    const iconUrl = new URLSearchParams(location.search).get('icon_url');
    chrome.webstorePrivate.beginInstallWithManifest3(
        {'id': extensionId, 'iconUrl': iconUrl, 'manifest': manifest},
        callbackFail('Image decode failed', function(result) {
          assertEq('icon_error', result);
        }));
  },
];

runTests(tests);
