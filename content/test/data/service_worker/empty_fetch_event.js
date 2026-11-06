// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker with empty fetch event listener
// summary: Service worker test script that registers an empty fetch event listener without responding to requests.
// ---

self.addEventListener('fetch', () => {});
