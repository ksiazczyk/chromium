// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Processing utilities header
// summary: Declares ProcessOsVersionString, which returns the Android device OS version as an integer for feature processing.
// ---

#ifndef COMPONENTS_SEGMENTATION_PLATFORM_INTERNAL_EXECUTION_PROCESSING_PROCESSING_UTILS_H_
#define COMPONENTS_SEGMENTATION_PLATFORM_INTERNAL_EXECUTION_PROCESSING_PROCESSING_UTILS_H_

#include "base/strings/string_number_conversions.h"

namespace segmentation_platform::processing {

// Returns the os version as integer for the android device.
int ProcessOsVersionString(std::string os_version);

}  // namespace segmentation_platform::processing

#endif  // COMPONENTS_SEGMENTATION_PLATFORM_INTERNAL_EXECUTION_PROCESSING_PROCESSING_UTILS_H_
