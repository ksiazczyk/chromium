// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker fetch listener with handleEvent property test
// summary: Service worker test script that registers a fetch listener object with a handleEvent property defined via Object.defineProperty.
// ---

let obj = {};
Object.defineProperty(obj, "handleEvent", {
  get: () => {},
  configurable: true,
  enumerable: true,
});
self.addEventListener('fetch', obj);
