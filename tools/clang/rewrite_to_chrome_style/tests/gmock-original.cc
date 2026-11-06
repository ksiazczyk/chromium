// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Original gmock test input for Chrome style rewriter
// summary: Blink-style gmock test input verifying renaming inside MOCK_METHOD macros and EXPECT_CALL and ON_CALL matchers.
// ---

#include "gmock/gmock.h"

namespace blink {

namespace simple_test {

class Interface {
 public:
  virtual void myMethod(int my_param) {}
};

class MockedInterface : public Interface {
 public:
  MOCK_METHOD1(myMethod, void(int));
};

void test() {
  MockedInterface mockedInterface;
  EXPECT_CALL(mockedInterface, myMethod(1));
  EXPECT_CALL(
      mockedInterface,  // A comment to prevent reformatting into single line.
      myMethod(1));
  mockedInterface.myMethod(123);

  int arg;
  ON_CALL(mockedInterface, myMethod(1))
      .WillByDefault(testing::SaveArg<0>(&arg));
}

}  // namespace simple_test

namespace no_base_method_to_override {

class MockDestructible {
 public:
  MOCK_METHOD0(destruct, void());
};

void Test() {
  MockDestructible destructible;
  EXPECT_CALL(destructible, destruct());
}

}  // namespace no_base_method_to_override

}  // namespace blink
