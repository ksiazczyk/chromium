// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test condition waiter interface
// summary: Defines the abstract base interface for awaitable test conditions, requiring subclasses to implement a Wait method.
// ---

#ifndef CHROME_BROWSER_ASH_LOGIN_TEST_TEST_CONDITION_WAITER_H_
#define CHROME_BROWSER_ASH_LOGIN_TEST_TEST_CONDITION_WAITER_H_

namespace ash {
namespace test {

// Generic class for conditions that can be awaited it test.
class TestConditionWaiter {
 public:
  TestConditionWaiter(const TestConditionWaiter&) = delete;
  TestConditionWaiter& operator=(const TestConditionWaiter&) = delete;

  virtual ~TestConditionWaiter() = default;
  virtual void Wait() = 0;

 protected:
  TestConditionWaiter() = default;
};

}  // namespace test
}  // namespace ash

#endif  // CHROME_BROWSER_ASH_LOGIN_TEST_TEST_CONDITION_WAITER_H_
