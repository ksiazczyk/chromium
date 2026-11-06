// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test script injecting a sentinel value
// summary: Test resource script that sets window.injectedSentinel to 42 for use in extension test resource checks.
// ---

window.injectedSentinel = 42;
