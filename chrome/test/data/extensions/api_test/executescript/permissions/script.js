// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Injected location script
// summary: Script injected by the tests that returns window.location.href so results can be verified.
// ---

// Return the location so the test can verify the expected results.
window.location.href;
