// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: PAC test script returning local IP addresses
// summary: Test fixture PAC script that returns a proxy string built from the myIpAddress() and myIpAddressEx() results.
// ---

function FindProxyForURL(url, host) {
  return "PROXY " + myIpAddress() + "-" + myIpAddressEx() + ".test:99";
}
