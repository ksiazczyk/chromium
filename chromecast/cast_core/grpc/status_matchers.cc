// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Status matchers implementation
// summary: Implements destructors and copy constructors for the internal gMock status matcher helpers used in gRPC tests.
// ---

#include "chromecast/cast_core/grpc/status_matchers.h"

namespace cast {
namespace test {
namespace internal {

StatusResolver::~StatusResolver() = default;

StatusIsPolymorphicWrapper::StatusIsPolymorphicWrapper(
    const StatusIsPolymorphicWrapper&) = default;

StatusIsPolymorphicWrapper::~StatusIsPolymorphicWrapper() = default;

}  // namespace internal
}  // namespace test
}  // namespace cast
