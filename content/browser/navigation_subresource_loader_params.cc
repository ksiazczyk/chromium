// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SubresourceLoaderParams implementation
// summary: Implements the default constructors, destructors and move operations for the SubresourceLoaderParams struct used during navigation.
// ---

#include "content/browser/navigation_subresource_loader_params.h"

namespace content {

SubresourceLoaderParams::SubresourceLoaderParams() = default;
SubresourceLoaderParams::~SubresourceLoaderParams() = default;

SubresourceLoaderParams::SubresourceLoaderParams(SubresourceLoaderParams&&) =
    default;
SubresourceLoaderParams& SubresourceLoaderParams::operator=(
    SubresourceLoaderParams&&) = default;

}  // namespace content
