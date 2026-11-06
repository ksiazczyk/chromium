// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: First embedder test invocation
// summary: Starts the webRequest test for the first webview using empty1.html and the ready1, success1 and fail1 messages.
// ---

runWebRequestTest('empty1.html', 'ready1', 'success1', 'fail1');
