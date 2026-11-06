// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ClearKey MediaDrm delegate class declaration
// summary: Declares a MediaDrmBridgeDelegate subclass that provides the ClearKey UUID for Android DRM support.
// ---

#ifndef COMPONENTS_CDM_COMMON_CLEARKEY_DRM_DELEGATE_ANDROID_H_
#define COMPONENTS_CDM_COMMON_CLEARKEY_DRM_DELEGATE_ANDROID_H_

#include <stdint.h>

#include "media/base/android/media_drm_bridge_delegate.h"

namespace cdm {

class ClearKeyDrmDelegateAndroid : public media::MediaDrmBridgeDelegate {
 public:
  ClearKeyDrmDelegateAndroid();

  ClearKeyDrmDelegateAndroid(const ClearKeyDrmDelegateAndroid&) = delete;
  ClearKeyDrmDelegateAndroid& operator=(const ClearKeyDrmDelegateAndroid&) =
      delete;

  ~ClearKeyDrmDelegateAndroid() override;

  // media::MediaDrmBridgeDelegate implementation:
  const std::vector<uint8_t> GetUUID() const override;
};

}  // namespace cdm

#endif  // COMPONENTS_CDM_COMMON_CLEARKEY_DRM_DELEGATE_ANDROID_H_
