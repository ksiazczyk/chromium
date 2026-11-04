// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Synchronous receiver for the first iframe message
// summary: Non-module snippet that creates a promise resolving on the first message from the iframe, signalling that the iframe is ready to exchange postMessage traffic.
// ---

// This snippet of code must run synchronously (not as a module), before the
// <iframe> element is encountered in the DOM. This is to ensure there is a
// receiver for the very first message that is received from the <iframe>. That
// message is the one that indicates that the <iframe> is ready to receive its
// own messages over window.postMessage().
window.firstMessageReceived = new Promise(resolve => {
  window.addEventListener('message', resolve, {once: true});
});
