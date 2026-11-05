// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ComputedAppSizeWithOrigin implementation
// summary: Implements the value object that stores a web app's size in bytes, stored data size in bytes, and an optional origin with validity checks.
// ---

#include "chrome/browser/web_applications/commands/computed_app_size.h"

#include <iostream>
#include <optional>

namespace web_app {

ComputedAppSizeWithOrigin::ComputedAppSizeWithOrigin() = default;
ComputedAppSizeWithOrigin::~ComputedAppSizeWithOrigin() = default;

// copy-constructor, needed due to origin is optional
ComputedAppSizeWithOrigin::ComputedAppSizeWithOrigin(
    ComputedAppSizeWithOrigin const& value)
    : app_size_in_bytes_(value.app_size_in_bytes()),
      data_size_in_bytes_(value.data_size_in_bytes()),
      origin_(value.origin()) {}

ComputedAppSizeWithOrigin::ComputedAppSizeWithOrigin(
    uint64_t app_size_in_bytes,
    uint64_t data_size_in_bytes,
    std::optional<url::Origin> origin)
    : app_size_in_bytes_(app_size_in_bytes),
      data_size_in_bytes_(data_size_in_bytes),
      origin_(origin) {
  CHECK(!origin.has_value() || *origin != url::Origin());
}

uint64_t ComputedAppSizeWithOrigin::app_size_in_bytes() const {
  return app_size_in_bytes_;
}

uint64_t ComputedAppSizeWithOrigin::data_size_in_bytes() const {
  return data_size_in_bytes_;
}

const std::optional<url::Origin> ComputedAppSizeWithOrigin::origin() const {
  return origin_;
}

}  // namespace web_app
