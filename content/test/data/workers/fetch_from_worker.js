// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fetch from worker test script
// summary: Dedicated worker script that fetches a URL from an incoming message and posts back the response text, a bad response notice, or the error.
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
