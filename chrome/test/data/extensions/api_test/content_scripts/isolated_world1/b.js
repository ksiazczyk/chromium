// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test script incrementing the shared isolated world variable
// summary: Increments the num variable defined by the first content script to verify both scripts share the same isolated world.
// ---

// Updates the variable defined in a.js.
num++;
