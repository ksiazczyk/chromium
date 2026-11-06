// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FtlHostDeviceIdProvider class declaration
// summary: Declares FtlHostDeviceIdProvider, which wraps a chromoting host ID into an FTL device ID for host sign-in.
// ---

#ifndef REMOTING_SIGNALING_FTL_HOST_DEVICE_ID_PROVIDER_H_
#define REMOTING_SIGNALING_FTL_HOST_DEVICE_ID_PROVIDER_H_

#include <string>

#include "remoting/signaling/ftl_device_id_provider.h"

namespace remoting {

// FtlDeviceIdProvider implementation for chromoting host, which simply wraps
// the host ID.
class FtlHostDeviceIdProvider final : public FtlDeviceIdProvider {
 public:
  explicit FtlHostDeviceIdProvider(const std::string& host_id);
  ~FtlHostDeviceIdProvider() override;

  ftl::DeviceId GetDeviceId() override;

 private:
  ftl::DeviceId device_id_;
};

}  // namespace remoting

#endif  // REMOTING_SIGNALING_FTL_HOST_DEVICE_ID_PROVIDER_H_
