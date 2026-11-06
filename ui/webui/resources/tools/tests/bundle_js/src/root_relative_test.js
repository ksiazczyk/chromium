// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: root_relative_test.js test fixture
// summary: Test fixture importing a fake-scheme root-relative module to exercise root-relative import resolution.
// ---

import 'some-fake-scheme://foo/foo_with_root_relative.js';
alert('Hello from src/root_relative_test.js');
