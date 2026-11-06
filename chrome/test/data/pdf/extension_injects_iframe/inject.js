// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test extension content script injecting an iframe
// summary: Content script of the Break PDF Display test extension that appends an iframe to the page body to break PDF display in Chromium.
// ---

document.body.appendChild(document.createElement('iframe'));
