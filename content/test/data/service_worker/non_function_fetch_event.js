// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker test script with a non-function fetch listener
// summary: Service worker test script that registers an empty object as a fetch event listener to exercise invalid listener handling.
// ---

self.addEventListener('fetch', {});
