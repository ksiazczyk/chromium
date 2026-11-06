// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Media timestamp constants
// summary: Defines media constants kNoTimestamp for invalid or missing timestamps and kInfiniteDuration for infinite stream duration.
// ---

#ifndef MEDIA_BASE_TIMESTAMP_CONSTANTS_H_
#define MEDIA_BASE_TIMESTAMP_CONSTANTS_H_

#include "base/time/time.h"

namespace media {

// Indicates an invalid or missing timestamp.
constexpr base::TimeDelta kNoTimestamp = base::TimeDelta::Min();

// Represents an infinite stream duration.
constexpr base::TimeDelta kInfiniteDuration = base::TimeDelta::Max();

}  // namespace media

#endif  // MEDIA_BASE_TIMESTAMP_CONSTANTS_H_
