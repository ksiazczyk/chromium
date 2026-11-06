// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Dedicated worker test helper posting a message
// summary: Minimal dedicated worker script that posts the number 42 back to its owner, serving as a simple worker for back/forward cache tests.
// ---

postMessage(42);
