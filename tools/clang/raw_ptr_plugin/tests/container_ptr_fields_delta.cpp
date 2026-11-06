// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Container pointer field config delta test
// summary: Test source verifying container check config overrides, with std::vector and a custom container included and std::list excluded via YAML.
// ---

#include <list>
#include <vector>

template <typename T>
struct MyCustomContainer {};

struct MyStruct {
  // Error expected: std::vector is in Default() and NOT excluded.
  std::vector<int*> vector_member;

  // Error expected: MyCustomContainer is explicitly included in YAML.
  MyCustomContainer<int*> custom_member;

  // No error expected: std::list is in Default() but explicitly excluded in
  // YAML.
  std::list<int*> list_member;
};
