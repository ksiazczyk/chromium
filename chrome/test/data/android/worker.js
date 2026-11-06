// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: script
// title: Worker script for content provider tests
// summary: Worker script that replies to any message with a load confirmation, kept at the folder root because the test content provider cannot serve files from subdirectories.
// ---

// This file is accessed via content:// URL and can not be in a sub-directory
// as TestContentProvider does not support it.
onmessage = function(e) {
  postMessage('load');
}
