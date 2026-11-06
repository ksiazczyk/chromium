// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Optional module require helper
// summary: Provides a tryrequire helper that loads a Node module and returns undefined when the module cannot be required.
// ---

'use strict';

function tryrequire(name) {
  try {
    return require(name);
  } catch (x) {
    return undefined;
  }
}

module.exports = {
  tryrequire,
}
