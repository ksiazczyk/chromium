// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Channel to enum implementation
// summary: Maps ChromeOS release track names such as stable, beta, dev, canary, ltc and lts to version_info::Channel values.
// ---

#include "chromeos/ash/components/channel/channel_to_enum.h"

#include <string_view>

#include "chromeos/ash/components/channel/channel_info.h"

namespace ash {

version_info::Channel ChannelToEnum(std::string_view channel) {
  if (channel == kReleaseChannelStable) {
    return version_info::Channel::STABLE;
  } else if (channel == kReleaseChannelBeta) {
    return version_info::Channel::BETA;
  } else if (channel == kReleaseChannelDev) {
    return version_info::Channel::DEV;
  } else if (channel == kReleaseChannelCanary) {
    return version_info::Channel::CANARY;
  } else if (channel == kReleaseChannelLtc || channel == kReleaseChannelLts) {
    return version_info::Channel::STABLE;
  } else {
    return version_info::Channel::UNKNOWN;
  }
}

}  // namespace ash
