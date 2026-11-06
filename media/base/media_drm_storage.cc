// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MediaDrmStorage session data implementation
// summary: Implements the constructors and destructor of MediaDrmStorage::SessionData, which holds a key set ID, MIME type and key type for persistent DRM sessions.
// ---

#include "media/base/media_drm_storage.h"

#include <utility>

namespace media {

MediaDrmStorage::SessionData::SessionData(std::vector<uint8_t> key_set_id,
                                          std::string mime_type,
                                          MediaDrmKeyType key_type)
    : key_set_id(std::move(key_set_id)),
      mime_type(std::move(mime_type)),
      key_type(key_type) {}

MediaDrmStorage::SessionData::SessionData(const SessionData& other) = default;

MediaDrmStorage::SessionData::~SessionData() {}

MediaDrmStorage::MediaDrmStorage() {}

MediaDrmStorage::~MediaDrmStorage() {}

}  // namespace media
