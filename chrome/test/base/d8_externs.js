// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @fileoverview
 * Externs for d8, v8's shell at v8/src/d8/.
 * @externs
 */

// ---docerion
// type: test
// title: d8 shell externs
// summary: Provides Closure extern declarations for d8 shell functions such as print, quit, and read used in tests.
// ---

/** @param {...string} var_args */
function print(var_args) {}

/** @param {number} code */
function quit(code) {}

/**
 * @param {string} path
 * @return {string}
 */
function read(path) {}
