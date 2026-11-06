// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test source for span field exclusion
// summary: C++ test input verifying that base::span fields are flagged while fields listed in the raw_ptr_exclude_fields exclusion file are exempt.
// ---

#include "base/containers/span.h"

class SomeClass {};

class MyClass {
 public:
  // Error expected. A raw_span should be used instead of a span.
  base::span<SomeClass> span_field;
  // No error expected because of exclude-fields file,
  // raw_ptr_exclude_fields.exclude.
  base::span<SomeClass> excluded_span_field;
};
