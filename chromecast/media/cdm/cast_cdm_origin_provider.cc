// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CastCdmOriginProvider implementation
// summary: Implements GetCdmOrigin, a utility that synchronously fetches the CDM origin through the mojo frame interface factory.
// ---

#include "chromecast/media/cdm/cast_cdm_origin_provider.h"

#include "media/mojo/mojom/frame_interface_factory.mojom.h"
#include "mojo/public/cpp/bindings/sync_call_restrictions.h"

namespace chromecast {

// static
bool CastCdmOriginProvider::GetCdmOrigin(
    ::media::mojom::FrameInterfaceFactory* interfaces,
    url::Origin* cdm_origin) {
  mojo::SyncCallRestrictions::ScopedAllowSyncCall allow_sync_call;
  return interfaces->GetCdmOrigin(cdm_origin);
}

}  // namespace chromecast
