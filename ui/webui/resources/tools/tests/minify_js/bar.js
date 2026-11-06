// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: bar.js minify_js test input
// summary: JavaScript test input for the minify_js tool, checking that comments are removed while a non-Chromium copyright comment is preserved.
// ---

// comments should be removed
const foo = {
    'bar': 0,
    baz: 5,
};
const qux = foo.bar + foo.baz;

/**
 * Copyright (C) 2024 Bar
 * Test a different copyright from Chromium to make sure that's not removed.
 */
const quux = 5;
