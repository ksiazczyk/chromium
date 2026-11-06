// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mixed type and value imports violations test fixture
// summary: ESLint test fixture combining a type and a value import from the same module in one statement, violating the no-mixed-type-and-value-imports rule.
// ---

import {type Bar, foo} from './foo.js';

export const foo: Bar = {
  bar: 1,
};
