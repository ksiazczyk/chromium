// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TypeScript error test fixture
// summary: Test fixture exporting a foo function whose number return value contradicts its declared string return type.
// ---

export function foo(): string {
  return 17;
}
