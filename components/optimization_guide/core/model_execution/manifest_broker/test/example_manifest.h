// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Header for the example manifest test helper
// summary: Declares BuildExampleManifest, which constructs an example model manifest for manifest broker tests.
// ---

#ifndef COMPONENTS_OPTIMIZATION_GUIDE_CORE_MODEL_EXECUTION_MANIFEST_BROKER_TEST_EXAMPLE_MANIFEST_H_
#define COMPONENTS_OPTIMIZATION_GUIDE_CORE_MODEL_EXECUTION_MANIFEST_BROKER_TEST_EXAMPLE_MANIFEST_H_

#include "components/optimization_guide/proto/manifest.pb.h"

namespace optimization_guide {

proto::Manifest BuildExampleManifest();

}  // namespace optimization_guide

#endif  // COMPONENTS_OPTIMIZATION_GUIDE_CORE_MODEL_EXECUTION_MANIFEST_BROKER_TEST_EXAMPLE_MANIFEST_H_
