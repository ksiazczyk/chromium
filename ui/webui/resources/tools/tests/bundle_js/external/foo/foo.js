// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: foo.js test fixture for bundle_js tooling
// summary: Test fixture JavaScript module that imports a fake-scheme URL and shows an alert, used to exercise the bundle_js bundling tests.
// ---

import 'some-fake-scheme://bar/bar.js';
alert('Hello from external/foo/foo.js');
