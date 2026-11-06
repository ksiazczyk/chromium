// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Nested worker message proxy for WebUSB back/forward cache test
// summary: Test helper that creates an inner worker and relays messages bidirectionally between the page and that worker for WebUSB back/forward cache testing.
// ---

const worker = new Worker("./worker.js");

// This worker is a simple bidirectional proxy.
onmessage = message => worker.postMessage(message.data);
worker.onmessage = message => postMessage(message.data);
