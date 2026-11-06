// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TypeScript test input with if expressions
// summary: TypeScript fixture with if-expression comments marking code for conditional inclusion, used as preprocessor test input.
// ---

export function clickHandler() {
  // <if expr="orange">
  console.log('I should be excluded from TS');
  console.log('I also should be excluded');
  // </if>
  // <if expr="foo">
  console.log('I should be included in TS');
  // </if>
}
