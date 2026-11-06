// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: FedCM eval worker test helper
// summary: Web worker test helper that evaluates posted scripts with eval and forwards them to a nested worker when requested.
// ---

self.addEventListener('message', async (e) => {
  if (!e.data.nested) {
    e.ports[0].postMessage(await eval(e.data.script));
    return;
  }
  const worker = new Worker('./eval_worker.js');
  worker.postMessage(
    {
      nested: false,
      script: e.data.script,
    },
    [e.ports[0]]
  );
});
