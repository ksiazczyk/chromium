// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Nested worker user agent forwarding script
// summary: Worker test script that creates a nested user_agent.js worker and forwards its messages to the parent.
// ---

var worker = new Worker("user_agent.js");
worker.onmessage = function(e) {
  postMessage(e.data);
};
