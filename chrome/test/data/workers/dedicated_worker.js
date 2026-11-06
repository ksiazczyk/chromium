// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Dedicated worker test script
// summary: Minimal dedicated worker script that posts a loaded message when it starts.
// ---

postMessage("loaded");
