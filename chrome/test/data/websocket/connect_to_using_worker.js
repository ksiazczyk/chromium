// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Dedicated worker WebSocket connection helper
// summary: Worker script that connects to a URL sent by the page and posts PASS or FAIL depending on whether the WebSocket opens.
// ---

onmessage = async e => {
  const ws = new WebSocket(e.data.url);

  ws.onopen = () => postMessage('PASS');
  ws.onclose = () => postMessage('FAIL');
}
