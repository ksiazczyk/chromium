// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CALayerResult Mojo traits header
// summary: Declares Mojo EnumTraits converting gfx::CALayerResult to and from the Mojo enum, guarded to compile only on Apple platforms.
// ---

#ifndef UI_GFX_MOJOM_CA_LAYER_RESULT_MOJOM_TRAITS_H_
#define UI_GFX_MOJOM_CA_LAYER_RESULT_MOJOM_TRAITS_H_

#include "build/build_config.h"
#include "ui/gfx/ca_layer_result.h"

#if BUILDFLAG(IS_APPLE)
#include "ui/gfx/mojom/ca_layer_result.mojom-shared.h"
#endif

namespace mojo {

#if BUILDFLAG(IS_APPLE)
template <>
struct EnumTraits<gfx::mojom::CALayerResult, gfx::CALayerResult> {
  static gfx::mojom::CALayerResult ToMojom(
      gfx::CALayerResult ca_layer_error_codde);
  static gfx::CALayerResult FromMojom(gfx::mojom::CALayerResult input);
};
#endif

}  // namespace mojo

#endif  // UI_GFX_MOJOM_CA_LAYER_RESULT_MOJOM_TRAITS_H_
