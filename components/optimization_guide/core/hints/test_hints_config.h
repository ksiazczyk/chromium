// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test Hints Config Helper Header
// summary: Declares CreateHintsConfig, a test helper producing a base64-encoded hints configuration string for the hints proto override command line switch.
// ---

#ifndef COMPONENTS_OPTIMIZATION_GUIDE_CORE_HINTS_TEST_HINTS_CONFIG_H_
#define COMPONENTS_OPTIMIZATION_GUIDE_CORE_HINTS_TEST_HINTS_CONFIG_H_

#include <string>

#include "components/optimization_guide/proto/hints.pb.h"
#include "url/gurl.h"

namespace optimization_guide {

// Creates the hints config with |optimization_type| to |hints_url| that returns
// the |metadata|. This config string can be passed to the |kHintsProtoOverride|
// commandline switch.
std::string CreateHintsConfig(const GURL& hints_url,
                              proto::OptimizationType optimization_type,
                              proto::Any* metadata);

}  // namespace optimization_guide

#endif  // COMPONENTS_OPTIMIZATION_GUIDE_CORE_HINTS_TEST_HINTS_CONFIG_H_
