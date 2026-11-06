// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Dedicated worker echoing previous message
// summary: Dedicated worker script that replies to post messages with the value of the previously received message.
// ---

// Responds to post messages with the value of the *previous* message that was
// received.
let lastMessage = 'none';
self.addEventListener('message', (e) => {
  postMessage(lastMessage);
  lastMessage = e.data;
});
