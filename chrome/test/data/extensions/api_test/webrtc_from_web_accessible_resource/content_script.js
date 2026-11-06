// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script embedding extension iframe for getUserMedia test
// summary: Content script that appends an iframe loading the extension's iframe_content.html with microphone permission to drive the getUserMedia API test.
// ---

const iframe = document.createElement('iframe');
iframe.src =
    chrome.runtime.getURL('iframe_content.html' + document.location.search);
iframe.allow = 'microphone';
document.body.appendChild(iframe);
