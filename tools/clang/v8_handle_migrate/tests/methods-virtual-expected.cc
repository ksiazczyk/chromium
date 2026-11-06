// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Test file for the v8_handle_migrate clang tool.

// ---docerion
// type: test
// title: 'v8_handle_migrate test: virtual method expected output'
// summary: Expected output of the v8_handle_migrate clang tool test covering virtual and overridden methods that take handle parameters.
// ---

#include "base/handles.h"
#include "base/objects.h"

using v8::internal::DirectHandle;
using v8::internal::Handle;
using v8::internal::HeapObject;
using v8::internal::Map;
using v8::internal::Tagged;

class A {
 public:
  virtual Tagged<Map> foo(Handle<HeapObject> h) = 0;
};

class B : public A {
 public:
  Tagged<Map> foo(Handle<HeapObject> h) override { return h->map(); }
};
