// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: iOS OS version check header for PartitionAlloc base
// summary: Declares IsRunningOnOrLater, a PartitionAlloc base utility for checking whether the iOS operating system version is at or above a given major, minor, and bug fix version.
// ---

#ifndef PARTITION_ALLOC_PARTITION_ALLOC_BASE_IOS_IOS_UTIL_H_
#define PARTITION_ALLOC_PARTITION_ALLOC_BASE_IOS_IOS_UTIL_H_

#include <cstdint>

#include "partition_alloc/partition_alloc_base/component_export.h"

namespace partition_alloc::internal::base::ios {

// Returns whether the operating system is at the given version or later.
PA_COMPONENT_EXPORT(PARTITION_ALLOC_BASE)
bool IsRunningOnOrLater(int32_t major, int32_t minor, int32_t bug_fix);

}  // namespace partition_alloc::internal::base::ios

#endif  // PARTITION_ALLOC_PARTITION_ALLOC_BASE_IOS_IOS_UTIL_H_
