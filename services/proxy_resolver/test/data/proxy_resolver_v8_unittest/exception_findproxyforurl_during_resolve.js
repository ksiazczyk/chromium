// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This PAC script will throw an exception when accessing the "FindProxyForURL"
// the *second* time it is accessed.

// ---docerion
// type: test
// title: PAC test script throwing on second FindProxyForURL access
// summary: PAC script that throws an exception the second time the FindProxyForURL property is accessed during resolution.
// ---

function actualFindProxyForURL(url, host) {
  return "DIRECT";
}

var counter = 2;

function FindProxyForURLGetter() {
  counter--;
  if (counter <= 0)
    throw "crash!";
  return actualFindProxyForURL;
}

Object.defineProperty(this, "FindProxyForURL", {get: FindProxyForURLGetter});
