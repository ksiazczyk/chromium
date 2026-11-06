// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: External baz.js test fixture
// summary: JavaScript fixture in the bundle_js test data that calls alert, used to exercise bundling of external modules in WebUI resource tests.
// ---

alert('Hello from external/baz/baz.js');
