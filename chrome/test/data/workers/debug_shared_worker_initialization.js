// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Shared worker initialization debug worker script
// summary: Shared worker script with a debugger statement that replies pong to pings, used to debug worker initialization.
// ---

debugger;
var globalVar = 2011;
onconnect = function(e) {
  var port = e.ports[0];
  console.log('connected');
  port.postMessage("pong");
}

