// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mac text detection implementation header
// summary: Declares the macOS text detection class that wraps a Core Image CIDetector and implements the TextDetection Mojo interface.
// ---

#ifndef SERVICES_SHAPE_DETECTION_TEXT_DETECTION_IMPL_MAC_H_
#define SERVICES_SHAPE_DETECTION_TEXT_DETECTION_IMPL_MAC_H_

#include "services/shape_detection/public/mojom/textdetection.mojom.h"

@class CIDetector;

namespace shape_detection {

class TextDetectionImplMac : public mojom::TextDetection {
 public:
  TextDetectionImplMac();

  TextDetectionImplMac(const TextDetectionImplMac&) = delete;
  TextDetectionImplMac& operator=(const TextDetectionImplMac&) = delete;

  ~TextDetectionImplMac() override;

  void Detect(const SkBitmap& bitmap,
              mojom::TextDetection::DetectCallback callback) override;
  void EnsureReady(mojom::TextDetection::EnsureReadyCallback callback) override;

 private:
  CIDetector* __strong detector_;
};

}  // namespace shape_detection

#endif  // SERVICES_SHAPE_DETECTION_TEXT_DETECTION_IMPL_MAC_H_
