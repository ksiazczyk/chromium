// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ClearKey MediaDrm delegate implementation
// summary: Implements the Android MediaDrm bridge delegate that returns the ClearKey UUID.
// ---

#include "components/cdm/common/clearkey_drm_delegate_android.h"

#include <cstdint>
#include <vector>

#include "media/cdm/clear_key_cdm_common.h"

namespace cdm {

ClearKeyDrmDelegateAndroid::ClearKeyDrmDelegateAndroid() = default;

ClearKeyDrmDelegateAndroid::~ClearKeyDrmDelegateAndroid() = default;

const std::vector<uint8_t> ClearKeyDrmDelegateAndroid::GetUUID() const {
  return std::vector<uint8_t>(std::begin(media::kClearKeyUuid),
                              std::end(media::kClearKeyUuid));
}

}  // namespace cdm
