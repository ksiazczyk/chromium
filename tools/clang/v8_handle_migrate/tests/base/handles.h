// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// A mock header file, containing some basic stuff from v8/src/handles/handles.h

// ---docerion
// type: test
// title: Mock V8 handles header for migration tests
// summary: Mock header mimicking v8/src/handles/handles.h that provides Handle, DirectHandle and IndirectHandle templates as test input for the v8_handle_migrate clang tool.
// ---

#ifndef TOOLS_CLANG_V8_HANDLE_MIGRATE_TESTS_BASE_HANDLES_H_
#define TOOLS_CLANG_V8_HANDLE_MIGRATE_TESTS_BASE_HANDLES_H_

#include "tagged.h"

namespace v8::internal {

template <typename T>
class Handle {
 public:
  Handle() = default;

  template <typename S>
  Handle(Handle<S> handle) {}

  Tagged<T> operator->() const { return {}; }
  Tagged<T> operator*() const { return {}; }

  template <typename S>
  static const Handle<T> cast(Handle<S> that) {
    return {};
  }
};

template <typename T>
class DirectHandle {
 public:
  DirectHandle() = default;

  template <typename S>
  DirectHandle(DirectHandle<S> handle) {}

  template <typename S>
  DirectHandle(Handle<S> handle) {}

  Tagged<T> operator->() const { return {}; }
  Tagged<T> operator*() const { return {}; }

  template <typename S>
  static const DirectHandle<T> cast(DirectHandle<S> that) {
    return {};
  }

  template <typename S>
  static const DirectHandle<T> cast(Handle<S> that) {
    return {};
  }
};

template <typename T>
using IndirectHandle = Handle<T>;

}  // namespace v8::internal

#endif  // TOOLS_CLANG_V8_HANDLE_MIGRATE_TESTS_BASE_HANDLES_H_
