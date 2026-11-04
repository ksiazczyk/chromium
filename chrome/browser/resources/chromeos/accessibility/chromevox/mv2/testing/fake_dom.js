// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake DOM shim for v8 test environments
// summary: Small shim that maps ordinary web renderer window objects onto a plain v8 environment for testing.
// ---

// Maps some objects/functions within an ordinary web renderer to a v8 one.
window = {};
window.setTimeout = () => {};
globalThis = window;
