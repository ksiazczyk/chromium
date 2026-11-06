// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Proto value utilities header
// summary: Declares GetStringFromValue and AreValuesEqual helpers for working with optimization guide proto values.
// ---

#ifndef COMPONENTS_OPTIMIZATION_GUIDE_CORE_MODEL_EXECUTION_ON_DEVICE_MODEL_EXECUTION_PROTO_VALUE_UTILS_H_
#define COMPONENTS_OPTIMIZATION_GUIDE_CORE_MODEL_EXECUTION_ON_DEVICE_MODEL_EXECUTION_PROTO_VALUE_UTILS_H_

#include <string>

#include "components/optimization_guide/proto/descriptors.pb.h"

namespace optimization_guide {

// Returns the string for `val`.
std::string GetStringFromValue(const proto::Value& val);

// Returns whether two values are equal.
bool AreValuesEqual(const proto::Value& a, const proto::Value& b);

}  // namespace optimization_guide

#endif  // COMPONENTS_OPTIMIZATION_GUIDE_CORE_MODEL_EXECUTION_ON_DEVICE_MODEL_EXECUTION_PROTO_VALUE_UTILS_H_
