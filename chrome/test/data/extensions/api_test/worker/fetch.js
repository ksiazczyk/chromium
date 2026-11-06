// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Worker fetch permission test script
// summary: Worker script that attempts a fetch of a given URL and posts back whether it was allowed, handling both dedicated and shared worker scopes.
// ---

async function test(url) {
  let allowed = true;
  try {
    await fetch(url);
  } catch (e) {
    allowed = false;
  }
  return allowed;
}

if ('DedicatedWorkerGlobalScope' in self &&
    self instanceof DedicatedWorkerGlobalScope) {
  onmessage = message => {
    test(message.data).then(allowed => postMessage(allowed));
  };
} else if (
    'SharedWorkerGlobalScope' in self &&
    self instanceof SharedWorkerGlobalScope) {
  onconnect = e => {
    e.ports[0].onmessage = message => {
      test(message.data).then(allowed => e.ports[0].postMessage(allowed));
    };
  };
}
