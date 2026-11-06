// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker with empty fetch handler
// summary: Service worker fixture registering a no-op fetch event handler for banner behavior tests.
// ---

// A no-op fetch handler.
self.addEventListener('fetch', event => {});
