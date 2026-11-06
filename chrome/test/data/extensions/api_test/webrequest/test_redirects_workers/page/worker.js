// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Worker script fetching subresources for redirect tests
// summary: Worker script that fetches a posted subresource URL and reports its own location or the fetch error, handling dedicated, shared, and service worker scopes.
// ---

function test(subresourceUrl) {
  if (!subresourceUrl) {
    return Promise.resolve(self.location.href);
  }

  return fetch(subresourceUrl)
      .then(
          response => response.ok ?
              self.location.href :
              `Error: ${subresourceUrl} returned ${response.status}`,
          () => `Error: failed to fetch ${subresourceUrl}`);
}

if ('DedicatedWorkerGlobalScope' in self &&
    self instanceof DedicatedWorkerGlobalScope) {
  self.onmessage = async event => {
    event.target.postMessage(await test(event.data));
  };
} else if (
    'SharedWorkerGlobalScope' in self &&
    self instanceof SharedWorkerGlobalScope) {
  self.onconnect = async e => {
    const port = e.ports[0];
    port.onmessage = async event => {
      port.postMessage(await test(event.data));
    };
  };
} else if (
    'ServiceWorkerGlobalScope' in self &&
    self instanceof ServiceWorkerGlobalScope) {
  self.onmessage = async event => {
    event.source.postMessage(await test(event.data));
  };
}
