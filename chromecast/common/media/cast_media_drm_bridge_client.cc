// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CastMediaDrmBridgeClient implementation
// summary: Implements the Cast media DRM bridge client, returning the Widevine delegate for matching key system UUIDs and adding no extra UUID mappings.
// ---

#include "chromecast/common/media/cast_media_drm_bridge_client.h"

#include "chromecast/media/base/key_systems_common.h"

namespace chromecast {
namespace media {

CastMediaDrmBridgeClient::CastMediaDrmBridgeClient() {}

CastMediaDrmBridgeClient::~CastMediaDrmBridgeClient() {}

void CastMediaDrmBridgeClient::AddKeySystemUUIDMappings(KeySystemUuidMap* map) {
// Note: MediaDrmBridge adds the Widevine UUID mapping automatically.
}

::media::MediaDrmBridgeDelegate*
CastMediaDrmBridgeClient::GetMediaDrmBridgeDelegate(
    const ::media::UUID& scheme_uuid) {
  if (scheme_uuid == widevine_delegate_.GetUUID())
    return &widevine_delegate_;

  return nullptr;
}

}  // namespace media
}  // namespace chromecast
