// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Client redirect script from a.html to b.html
// summary: JavaScript that redirects the page to b.html on load, producing the client redirect event sequence verified by the test.
// ---

onload = function() {
  document.location = 'b.html';
};
