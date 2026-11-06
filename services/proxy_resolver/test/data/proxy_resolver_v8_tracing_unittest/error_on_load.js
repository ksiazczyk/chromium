// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: PAC test script that throws an error on load
// summary: Test fixture PAC script that throws an exception while loading, before FindProxyForURL is ever called.
// ---

alert('Prepare to DIE!');
var x = null;
return x.split('-');  // Throws exception.

function FindProxyForURL(url, host) {
  return "PROXY i-approve-this-message:42";
}
