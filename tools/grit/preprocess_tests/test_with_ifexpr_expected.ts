// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Expected TypeScript output for if expression preprocessing
// summary: Expected TypeScript output after grit preprocessing, with grit-removed-lines markers where code was excluded.
// ---

export function clickHandler() {
  // /*grit-removed-lines:3*/
  // 
  console.log('I should be included in TS');
  // 
}
