// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Missing constructor dllexport test source
// summary: C++ test case checking missing constructor warnings for dllexported classes in the plugin test suite.
// ---

#include "missing_ctor_dllexport.h"

// We don't warn on classes that use default ctors in cpp files.
class MissingInCPPOK {
 public:

 private:
  MyVector<int> one_;
  MyVector<MyString> two_;
};

int main() {
  MissingInCPPOK one;
  MissingCtorsArentOKInHeader two;
  return 0;
}
