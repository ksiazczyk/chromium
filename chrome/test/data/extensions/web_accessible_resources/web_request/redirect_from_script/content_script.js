// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script injecting redirect.js
// summary: Content script that injects a script element loading /redirect.js to trigger the webRequest redirect being tested.
// ---

const script = document.createElement('script');
document.body.appendChild(script);
script.src = '/redirect.js';
