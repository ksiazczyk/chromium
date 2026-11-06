// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TestSharedImageInterfaceProvider declaration
// summary: Declares TestSharedImageInterfaceProvider, a test double of SharedImageInterfaceProvider returning a configurable shared image interface.
// ---

#ifndef COMPONENTS_VIZ_TEST_TEST_SHARED_IMAGE_INTERFACE_PROVIDER_H_
#define COMPONENTS_VIZ_TEST_TEST_SHARED_IMAGE_INTERFACE_PROVIDER_H_

#include "components/viz/service/frame_sinks/shared_image_interface_provider.h"

namespace gpu {
class SharedImageInterface;
}  // namespace gpu

namespace viz {

class TestSharedImageInterfaceProvider : public SharedImageInterfaceProvider {
 public:
  TestSharedImageInterfaceProvider();
  TestSharedImageInterfaceProvider(
      scoped_refptr<gpu::SharedImageInterface> shared_image_interface);
  ~TestSharedImageInterfaceProvider() override;

  gpu::SharedImageInterface* GetSharedImageInterface() override;

 private:
  scoped_refptr<gpu::SharedImageInterface> shared_image_interface_;
};

}  // namespace viz

#endif  // COMPONENTS_VIZ_TEST_TEST_SHARED_IMAGE_INTERFACE_PROVIDER_H_
