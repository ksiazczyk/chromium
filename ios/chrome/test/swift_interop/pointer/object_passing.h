// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Object and ObjectPassing classes for Swift interop tests
// summary: Declares C++ Object and ObjectPassing classes used to test passing objects by reference and pointer across the Swift/C++ boundary.
// ---

#ifndef IOS_CHROME_TEST_SWIFT_INTEROP_POINTER_OBJECT_PASSING_H_
#define IOS_CHROME_TEST_SWIFT_INTEROP_POINTER_OBJECT_PASSING_H_

class Object {
 public:
  Object(int value) : value_(value) {}
  ~Object() {}

  int GetValue() const { return value_; }

 private:
  int value_;
};

class ObjectPassing {
 public:
  ObjectPassing() = default;
  ~ObjectPassing() = default;

  int AddReferences(const Object& one, const Object& two) const {
    return one.GetValue() + two.GetValue();
  }

  int AddPointers(Object* one, Object* two) const {
    return one->GetValue() + two->GetValue();
  }
};

#endif  // IOS_CHROME_TEST_SWIFT_INTEROP_POINTER_OBJECT_PASSING_H_
