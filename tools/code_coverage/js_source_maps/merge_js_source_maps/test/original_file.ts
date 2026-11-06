// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
// clang-format off

// ---docerion
// type: test
// title: Original TypeScript fixture for source map merge tests
// summary: TypeScript fixture with GRiT conditional code and TS-only constructs serving as the original source for the merge test.
// ---

// <if expr="is_macosx">
function thisIsRemoved(): boolean {
  return true;
}
// </if>

// Enums aren't natively available in JS, this will ensure a rewritten TS
// sourcemap.
enum ExampleEnum {
  SOME_EXAMPLE = 0,
  OTHER_EXAMPLE = 1,
}

abstract class SpecialTypeScriptProperties {
  /* Private variables are typescript only specifiers */
  protected protectedValue: number = 0;

  abstract method(): number;
}

class Derived extends SpecialTypeScriptProperties {
  private privateValue: number = 0;

  method() {
    console.log(this.privateValue);
    return this.protectedValue;
  }
}
