// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Missing constructor plugin test source
// summary: C++ test case verifying the plugin does not warn about missing constructors for classes defined in cpp files.
// ---

#include "missing_ctor.h"

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
