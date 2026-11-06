// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Nested worker test script
// summary: Test script that spawns a worker from post_loaded.js and forwards its messages back to the parent context.
// ---

const worker = new Worker('post_loaded.js');
worker.addEventListener("message", (event) => {
    self.postMessage(event.data);
});
