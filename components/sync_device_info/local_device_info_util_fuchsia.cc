// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fuchsia personalizable device name implementation
// summary: Fuchsia implementation of GetPersonalizableDeviceNameInternal that returns the system hostname.
// ---

#include <limits.h>
#include <string.h>
#include <unistd.h>

#include <string>

#include "base/compiler_specific.h"

namespace syncer {

std::string GetPersonalizableDeviceNameInternal() {
  char hostname[HOST_NAME_MAX];
  if (gethostname(hostname, std::size(hostname)) == 0)  // Success.
    return std::string(hostname,
                       UNSAFE_TODO(strnlen(hostname, std::size(hostname))));
  return std::string();
}

}  // namespace syncer
