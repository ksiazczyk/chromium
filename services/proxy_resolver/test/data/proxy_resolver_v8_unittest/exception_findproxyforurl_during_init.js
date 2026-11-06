// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This PAC script will throw an exception when accessing the
// "FindProxyForURL" property.

// ---docerion
// type: test
// title: PAC test script throwing when FindProxyForURL is accessed at init
// summary: PAC script that throws an exception when the FindProxyForURL property is accessed during initialization.
// ---

function FindProxyForURLGetter() {
  throw "crash!";
}

Object.defineProperty(this, "FindProxyForURL", {get: FindProxyForURLGetter});
