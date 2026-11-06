// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: PAC test script resolving the URL host
// summary: PAC script that passes the URL's host to dnsResolveEx() and returns DIRECT, used to exercise host resolution.
// ---

// This script passes the URL's host to dnsResolveEx().
function FindProxyForURL(url, host) {
  dnsResolveEx(host);
  return 'DIRECT';
}
