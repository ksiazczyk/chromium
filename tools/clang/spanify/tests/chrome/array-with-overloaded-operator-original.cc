// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Array with overloaded operator original input
// summary: Input fixture with a C array and an overloaded operator+ on an array reference, used as a spanify regression test against its expected output file.
// ---

struct MyClass {};
enum MyEnum { VALUE };

// Overload operator+ for MyClass(&)[10] and MyEnum
MyClass* operator+(MyClass (&arr)[10], MyEnum val);

int UnsafeIndex();

void test_regression() {
  MyClass arr[10];
  // Trigger spanification of arr
  arr[UnsafeIndex()] = MyClass();

  MyEnum val = VALUE;
  arr + val;
}
