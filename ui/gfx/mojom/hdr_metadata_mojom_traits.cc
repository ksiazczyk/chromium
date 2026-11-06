// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HDRMetadata Mojo struct traits implementation
// summary: Implements the mojo StructTraits Read function that maps HDRMetadata mojom fields into Skia HDR metadata objects on gfx::HDRMetadata.
// ---

#include "ui/gfx/mojom/hdr_metadata_mojom_traits.h"

#include "third_party/skia/include/private/SkHdrMetadata.h"

namespace mojo {

bool StructTraits<gfx::mojom::HDRMetadataDataView, gfx::HDRMetadata>::Read(
    gfx::mojom::HDRMetadataDataView data,
    gfx::HDRMetadata* output) {
  std::optional<skhdr::ContentLightLevelInformation> clli;
  if (!data.ReadClli(&clli)) {
    return false;
  }
  if (clli) {
    output->SetCLLI(*clli);
  }
  std::optional<skhdr::MasteringDisplayColorVolume> mdcv;
  if (!data.ReadMdcv(&mdcv)) {
    return false;
  }
  if (mdcv) {
    output->SetMDCV(*mdcv);
  }

  std::optional<skhdr::AdaptiveGlobalToneMap> agtm;
  if (!data.ReadAgtm(&agtm)) {
    return false;
  }
  if (agtm) {
    output->SetAgtm(*agtm);
  }
  return true;
}

}  // namespace mojo
