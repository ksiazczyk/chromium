// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Worker script import fixture
// summary: Script fixture that uses importScripts to load post_loaded.js, presumably for service worker or worker test scenarios.
// ---

self.importScripts("post_loaded.js");
