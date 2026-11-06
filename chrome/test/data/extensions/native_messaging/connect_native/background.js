// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Connect native test extension background service worker
// summary: Service worker for the connect_native test extension that opens a native messaging port to the org.chromium.chrome.tests.support app for as long as the worker stays active.
// ---

// The port should be active and connected to the test app for as long as the
// service worker remains active.
globalThis.port =
    chrome.runtime.connectNative('org.chromium.chrome.tests.support');
