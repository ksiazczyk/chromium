// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Puffin patch test app version 1 main
// summary: Do-nothing installer app source embedded in a CRX, serving as the version 1 fixture that the puff patch updates to puffin_app_v2.
// ---

// The Puffin patch test app is a do-nothing application "installer" that is
// embedded in an update CRX. This is version 1, version 2 is located at
// ../puffin_app_v2. if you apply the puffpatch puffin_app_v1_to_v2.puff to
// puffin_app_v1.crx3, it produces puffin_app_v2.crx3. See
// //third_party/puffin.
#include <iostream>

int main() {
  std::cout << "Hello, world! this is version 1 of puffin_app." << std::endl;
}
