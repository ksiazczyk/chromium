// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: PAC test script asserting WebAssembly is unavailable
// summary: PAC script that returns DIRECT when WebAssembly is undefined and throws otherwise, verifying WebAssembly is not exposed to proxy scripts.
// ---

function FindProxyForURL(url, host) {
  if (typeof WebAssembly == "undefined") return "DIRECT";
  throw new Error("WebAssembly should not be available");
}

