// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ProtoStatus enum for on-device model execution
// summary: Defines the ProtoStatus enum with kOk and kError values used to report the outcome of proto field operations.
// ---

#ifndef COMPONENTS_OPTIMIZATION_GUIDE_CORE_MODEL_EXECUTION_ON_DEVICE_MODEL_EXECUTION_PROTO_STATUS_H_
#define COMPONENTS_OPTIMIZATION_GUIDE_CORE_MODEL_EXECUTION_ON_DEVICE_MODEL_EXECUTION_PROTO_STATUS_H_

namespace optimization_guide {

enum class ProtoStatus {
  kOk = 0,
  kError = 1,
};

}  // namespace optimization_guide

#endif  // COMPONENTS_OPTIMIZATION_GUIDE_CORE_MODEL_EXECUTION_ON_DEVICE_MODEL_EXECUTION_PROTO_STATUS_H_
