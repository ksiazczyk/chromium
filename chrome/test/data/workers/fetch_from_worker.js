// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Dedicated worker fetch test script
// summary: Dedicated worker test script that fetches a URL received by message and posts the response text or error back.
// ---

self.onmessage = async e => {
  try {
    const response = await fetch(e.data.url);
    if (!response.ok) {
      self.postMessage('bad response');
      return;
    }
    const text = await response.text();
    self.postMessage(text);
  } catch (error) {
    self.postMessage(`${error}`);
  }
};
