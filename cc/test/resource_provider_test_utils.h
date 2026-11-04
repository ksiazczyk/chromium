// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Resource provider test utilities header
// summary: Declares SendResourceAndGetChildToParentMap, a test helper that transfers resources to the parent and returns the child-to-parent resource ID map.
// ---

#ifndef CC_TEST_RESOURCE_PROVIDER_TEST_UTILS_H_
#define CC_TEST_RESOURCE_PROVIDER_TEST_UTILS_H_

#include <unordered_map>
#include <vector>

#include "components/viz/client/client_resource_provider.h"
#include "components/viz/service/display/display_resource_provider.h"

namespace cc {
// Transfer resources to the parent and return the child to parent map.
const std::
    unordered_map<viz::ResourceId, viz::ResourceId, viz::ResourceIdHasher>&
    SendResourceAndGetChildToParentMap(
        const std::vector<viz::ResourceId>& resource_ids,
        viz::DisplayResourceProvider* resource_provider,
        viz::ClientResourceProvider* child_resource_provider,
        gpu::SharedImageInterface* shared_image_interface);

}  // namespace cc

#endif  // CC_TEST_RESOURCE_PROVIDER_TEST_UTILS_H_
