// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Nested worker proxy for back/forward cache serial test
// summary: Test fixture worker that acts as a bidirectional message proxy between the page and worker.js for a back/forward cache test involving the Web Serial API.
// ---

const worker = new Worker("./worker.js");

// This worker is a simple bidirectional proxy.
onmessage = message => worker.postMessage(message.data);
worker.onmessage = message => postMessage(message.data);
