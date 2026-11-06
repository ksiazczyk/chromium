// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Virtual base method also final test source
// summary: C++ test case checking the Chromium style plugin warns when virtual is redundant with final, including macro and out-of-place keyword cases.
// ---

#define VIRTUAL virtual
#define VIRTUAL_VOID virtual void

class A {
 public:
  virtual void F() final {}
  // Make sure an out-of-place virtual doesn't cause an incorrect fixit removal
  // to be emitted.
  void virtual G() final {}
  // Don't emit any fixits for virtual from macros.
  VIRTUAL void H() final {}
  void VIRTUAL I() final {}
  VIRTUAL_VOID J() final {}
};
