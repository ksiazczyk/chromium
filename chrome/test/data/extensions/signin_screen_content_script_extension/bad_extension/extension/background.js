// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Sign-in screen test extension background script
// summary: Background service worker for the bad test extension that logs a message when the extension with a disallowed content script loads on the sign-in screen.
// ---

console.info(
    'The sign-in screen extension with disallowed content script loaded');
