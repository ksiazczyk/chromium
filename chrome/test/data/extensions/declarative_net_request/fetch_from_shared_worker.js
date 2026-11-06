// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Shared worker fetch script
// summary: Shared worker script that fetches a requested URL and posts the final response URL or error back to the connecting page.
// ---

self.onconnect = async e => {
  const port = e.ports[0];
  port.onmessage = async msg => {
    try {
      const response = await fetch(msg.data.url);
      if (!response.ok) {
        port.postMessage('bad response');
        return;
      }
      port.postMessage(response.url);
    } catch (error) {
      port.postMessage(`${error.toString()}`);
    }
  };
};
