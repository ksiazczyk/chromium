// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Missing constructor ignored base test source
// summary: C++ test instantiating classes whose bases are ignored by the missing constructor plugin check.
// ---

#include "missing_ctor_ignored_base.h"

int main() {
  MissingCtorsWithIgnoredBase one;
  MissingCtorsWithIgnoredGrandBase two;
  return 0;
}
