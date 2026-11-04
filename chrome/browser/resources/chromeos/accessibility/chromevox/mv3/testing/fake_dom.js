// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake DOM environment for ChromeVox tests
// summary: Test helper that stubs window and globalThis to map ordinary web renderer objects onto a v8 environment.
// ---

// Maps some objects/functions within an ordinary web renderer to a v8 one.
window = {};
window.setTimeout = () => {};
globalThis = window;
