// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Worker loaded message script
// summary: Script that posts a loaded message via self.postMessage, used to verify worker load reporting in tests.
// ---

self.postMessage("loaded");
