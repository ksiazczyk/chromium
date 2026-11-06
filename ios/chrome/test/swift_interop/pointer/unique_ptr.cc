// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: ValueReturner implementation returning std::unique_ptr<Value>
// summary: Implements ValueReturner::Object returning a std::unique_ptr<Value> along with the Value class accessors.
// ---

#include "ios/chrome/test/swift_interop/pointer/unique_ptr.h"

std::unique_ptr<Value> ValueReturner::Object() {
  return std::make_unique<Value>(42);
}

Value::Value(int value) : value_(value) {}

Value::~Value() {}

bool Value::IsValid() const {
  return true;
}

int Value::GetValue() const {
  return value_;
}
