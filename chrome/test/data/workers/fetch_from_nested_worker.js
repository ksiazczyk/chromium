// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Nested worker fetch relay script
// summary: Worker script that spawns a nested worker and relays messages between it and the outer context.
// ---

const worker = new Worker('fetch_from_worker.js');
worker.onmessage = e => self.postMessage(e.data);
self.onmessage = e => worker.postMessage(e.data);
