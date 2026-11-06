// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Worker user agent test script
// summary: Worker script that posts the navigator user agent string back to its parent for browser test verification.
// ---

postMessage(navigator.userAgent);
