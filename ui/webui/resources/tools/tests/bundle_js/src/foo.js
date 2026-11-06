// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: foo.js bundle test fixture
// summary: JavaScript test fixture for the JS bundler that imports resources through fake schemes and shows an alert when loaded.
// ---

import 'chrome://resources/foo_resource.js';
import 'some-fake-scheme://foo/foo.js';
import 'some-fake-scheme://foo/baz.js';

alert('Hello from src/foo.js');
