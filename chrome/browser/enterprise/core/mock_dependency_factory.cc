// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MockDependencyFactory implementation
// summary: Provides the constructor and destructor for the MockDependencyFactory test double used by dependent tests.
// ---

#include "chrome/browser/enterprise/core/mock_dependency_factory.h"

namespace enterprise_core::test {

MockDependencyFactory::MockDependencyFactory() = default;

MockDependencyFactory::~MockDependencyFactory() = default;

}  // namespace enterprise_core::test
