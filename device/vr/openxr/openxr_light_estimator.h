// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OpenXrLightEstimator interface declaration
// summary: Declares the abstract OpenXrLightEstimator interface that returns light estimation data for a given frame time.
// ---

#ifndef DEVICE_VR_OPENXR_OPENXR_LIGHT_ESTIMATOR_H_
#define DEVICE_VR_OPENXR_OPENXR_LIGHT_ESTIMATOR_H_

#include "device/vr/public/mojom/vr_service.mojom.h"
#include "third_party/openxr/src/include/openxr/openxr.h"

namespace device {
class OpenXrLightEstimator {
 public:
  OpenXrLightEstimator();
  virtual ~OpenXrLightEstimator();
  virtual mojom::XRLightEstimationDataPtr GetLightEstimate(
      XrTime frame_time) = 0;
};

}  // namespace device

#endif  // DEVICE_VR_OPENXR_OPENXR_LIGHT_ESTIMATOR_H_
