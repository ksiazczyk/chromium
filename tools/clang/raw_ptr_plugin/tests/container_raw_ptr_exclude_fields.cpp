// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Container raw pointer fields test with field exclusions
// summary: Declares list and tuple fields holding raw pointers to verify which fields are flagged and which are excluded.
// ---

#include <list>
#include <tuple>

class SomeClass {};
class MyClass {
 public:
  // Error expected. A raw_ptr should be used instead of a raw pointer.
  std::list<SomeClass*> raw_ptr_ctn_field;
  // No error expected because of exclude-fields file,
  // raw_ptr_exclude_fields.exclude.
  std::list<SomeClass*> excluded_ptr_ctn_field;
  // Error expected. A raw_ptr should be used instead of raw_pointers.
  std::tuple<SomeClass*, int*> raw_ptr_tuple;
};
