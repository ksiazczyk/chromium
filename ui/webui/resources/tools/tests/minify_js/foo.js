// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: foo.js minify_js test input
// summary: JavaScript test input for the minify_js tool containing two Chromium copyright headers to exercise duplicate header handling.
// ---

const foo = 0;

// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
const bar = 0;
