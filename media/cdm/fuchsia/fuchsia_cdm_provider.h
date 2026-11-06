// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fuchsia CDM provider interface
// summary: Defines the FuchsiaCdmProvider interface for connecting fuchsia.media.drm ContentDecryptionModule channels to the remote DRM service.
// ---

#ifndef MEDIA_CDM_FUCHSIA_FUCHSIA_CDM_PROVIDER_H_
#define MEDIA_CDM_FUCHSIA_FUCHSIA_CDM_PROVIDER_H_

#include <fuchsia/media/drm/cpp/fidl.h>
#include <string>

#include "media/base/media_export.h"

namespace media {

// Interface to connect fuchsia::media::drm::ContentDecryptionModule to the
// remote service.
class MEDIA_EXPORT FuchsiaCdmProvider {
 public:
  virtual ~FuchsiaCdmProvider() = default;
  virtual void CreateCdmInterface(
      const std::string& key_system,
      fidl::InterfaceRequest<fuchsia::media::drm::ContentDecryptionModule>
          cdm_request) = 0;
};

}  // namespace media

#endif  // MEDIA_CDM_FUCHSIA_FUCHSIA_CDM_PROVIDER_H_
