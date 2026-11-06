// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Sign-in screen test extension background script
// summary: Background service worker script that logs a message when the allowlisted sign-in screen test extension loads.
// ---

console.info('The sign-in screen extension with allowed content script loaded');
