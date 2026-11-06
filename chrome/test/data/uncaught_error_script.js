// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Script throwing an uncaught error
// summary: JavaScript fixture that throws an uncaught error, used to test error reporting for external scripts in Chrome browser tests.
// ---

throw new Error("New error message");