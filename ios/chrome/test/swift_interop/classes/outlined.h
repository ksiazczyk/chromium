// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Outlined class header for Swift interop tests
// summary: Declares the Outlined class with out-of-line methods used to test Swift interop with non-inlined C++ code.
// ---

#ifndef IOS_CHROME_TEST_SWIFT_INTEROP_CLASSES_OUTLINED_H_
#define IOS_CHROME_TEST_SWIFT_INTEROP_CLASSES_OUTLINED_H_

class Outlined {
 private:
  int sum_;

 public:
  Outlined();
  Outlined(int initial_value);

  int OutlinedAddition(int delta);
};

#endif  // IOS_CHROME_TEST_SWIFT_INTEROP_CLASSES_OUTLINED_H_
