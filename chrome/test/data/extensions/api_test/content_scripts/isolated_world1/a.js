// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test script defining a shared variable for the isolated world test
// summary: Defines the variable num in the isolated world so other extension content scripts can read and update it during the test.
// ---

// NOTE: Using `let` instead of `const` since this variable is read and
// updated by other script from the extension.
let num = 1;  // eslint-disable-line
