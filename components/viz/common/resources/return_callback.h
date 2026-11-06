// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Return callback type for returned resources
// summary: Defines the ReturnCallback type used to return a vector of ReturnedResourceViz back to a client.
// ---

#ifndef COMPONENTS_VIZ_COMMON_RESOURCES_RETURN_CALLBACK_H_
#define COMPONENTS_VIZ_COMMON_RESOURCES_RETURN_CALLBACK_H_

#include <vector>

#include "base/functional/callback.h"
#include "components/viz/common/resources/returned_resource.h"

namespace viz {

using ReturnCallback =
    base::RepeatingCallback<void(std::vector<ReturnedResourceViz>)>;

}  // namespace viz

#endif  // COMPONENTS_VIZ_COMMON_RESOURCES_RETURN_CALLBACK_H_
