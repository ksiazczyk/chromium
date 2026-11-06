// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker fetch passthrough handler
// summary: Service worker test fixture that registers an empty fetch listener so requests pass through unchanged.
// ---

self.addEventListener('fetch', e => {});
