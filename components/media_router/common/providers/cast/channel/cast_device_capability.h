// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cast device capability enum
// summary: Defines the CastDeviceCapability enum and its EnumSet type covering video, audio, dev mode, and multizone group capabilities.
// ---

#ifndef COMPONENTS_MEDIA_ROUTER_COMMON_PROVIDERS_CAST_CHANNEL_CAST_DEVICE_CAPABILITY_H_
#define COMPONENTS_MEDIA_ROUTER_COMMON_PROVIDERS_CAST_CHANNEL_CAST_DEVICE_CAPABILITY_H_

#include <stdint.h>

#include "base/containers/enum_set.h"

namespace cast_channel {

// Cast device capabilities.
enum class CastDeviceCapability : uint8_t {
  kVideoOut,
  kVideoIn,
  kAudioOut,
  kAudioIn,
  kDevMode,
  kMultizoneGroup
};

using CastDeviceCapabilitySet =
    base::EnumSet<CastDeviceCapability,
                  CastDeviceCapability::kVideoOut,
                  CastDeviceCapability::kMultizoneGroup>;

}  // namespace cast_channel

#endif  // COMPONENTS_MEDIA_ROUTER_COMMON_PROVIDERS_CAST_CHANNEL_CAST_DEVICE_CAPABILITY_H_
