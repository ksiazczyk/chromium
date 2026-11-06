// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: foo_with_root_relative.js test fixture for bundle_js tooling
// summary: Test fixture JavaScript module combining a fake-scheme import with a root-relative import to exercise bundler path handling in tests.
// ---

import 'some-fake-scheme://bar/bar.js';
import '/strings.m.js';
alert('Hello from external/foo/foo_with_root_relative.js');
