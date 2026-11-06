// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Test API binder stubs implementation
// summary: Implements set and get functions for a test API binder callback used to inject a TestApi Mojo implementation in test environments.
// ---

#include "components/services/storage/test_api_stubs.h"

#include "base/functional/callback.h"
#include "base/no_destructor.h"

namespace storage {

namespace {

TestApiBinderForTesting& GetTestApiBinder() {
  static base::NoDestructor<TestApiBinderForTesting> binder;
  return *binder;
}

}  // namespace

void SetTestApiBinderForTesting(TestApiBinderForTesting binder) {
  GetTestApiBinder() = std::move(binder);
}

const TestApiBinderForTesting& GetTestApiBinderForTesting() {
  return GetTestApiBinder();
}

}  // namespace storage
