// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script injecting the extension iframe
// summary: Content script that appends an iframe pointing to the extension's iframe.html into the page under test.
// ---

const ifr = document.createElement('iframe');
ifr.src = chrome.runtime.getURL('iframe.html');
document.body.appendChild(ifr);
