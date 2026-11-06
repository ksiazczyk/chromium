// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: bar_expected.js minify_js expected output
// summary: Expected minified result for bar.js, showing comments stripped except the non-Chromium copyright block that must be kept.
// ---

const foo={bar:0,baz:5};const qux=foo.bar+foo.baz;
/**
 * Copyright (C) 2024 Bar
 * Test a different copyright from Chromium to make sure that's not removed.
 */const quux=5;