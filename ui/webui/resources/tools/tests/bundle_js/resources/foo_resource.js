// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Foo resource fixture for bundle_js tests
// summary: Test fixture JavaScript module that exports foo and shows an alert, used as a bundled resource input for the bundle_js tool tests.
// ---

export const foo = 5;
alert('Hello from resources/foo_resource.js');
