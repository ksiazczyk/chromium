// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Media stream devices filtering utility
// summary: Implements FilterMediaDevices, which returns only the media stream devices whose IDs appear in the eligible device ID list.
// ---

#include "components/webrtc/media_stream_devices_util.h"

namespace webrtc {

blink::MediaStreamDevices FilterMediaDevices(
    blink::MediaStreamDevices devices,
    const std::vector<std::string>& eligible_device_ids) {
  base::flat_set<std::string> eligible_device_id_set{eligible_device_ids};
  std::erase_if(devices, [&eligible_device_id_set](
                             const blink::MediaStreamDevice& device) {
    return !eligible_device_id_set.contains(device.id);
  });
  return devices;
}

}  // namespace webrtc
