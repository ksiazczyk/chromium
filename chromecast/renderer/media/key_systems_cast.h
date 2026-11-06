// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chromecast key systems declaration
// summary: Declares AddChromecastKeySystems, the entry point for adding Chromecast key system information to the renderer's key system list.
// ---

#ifndef CHROMECAST_RENDERER_MEDIA_KEY_SYSTEMS_CAST_H_
#define CHROMECAST_RENDERER_MEDIA_KEY_SYSTEMS_CAST_H_

#include "media/base/key_system_info.h"

namespace chromecast {
namespace media {

void AddChromecastKeySystems(::media::KeySystemInfos* key_system_infos,
                             bool enable_persistent_license_support);

}  // namespace media
}  // namespace chromecast

#endif  // CHROMECAST_RENDERER_MEDIA_KEY_SYSTEMS_CAST_H_
