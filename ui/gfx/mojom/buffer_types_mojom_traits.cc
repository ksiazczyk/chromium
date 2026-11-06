// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GpuMemoryBufferHandle Mojom traits implementation
// summary: Implements Mojo StructTraits for converting gfx::GpuMemoryBufferHandle to and from its Mojom representation under Blink builds.
// ---

#include "ui/gfx/mojom/buffer_types_mojom_traits.h"

#include "build/blink_buildflags.h"
#include "build/build_config.h"
#include "ui/gfx/mojom/native_handle_types.mojom-shared.h"

namespace mojo {

#if BUILDFLAG(USE_BLINK)
gfx::GpuMemoryBufferHandle& StructTraits<
    gfx::mojom::GpuMemoryBufferHandleDataView,
    gfx::GpuMemoryBufferHandle>::platform_handle(gfx::GpuMemoryBufferHandle&
                                                     handle) {
  return handle;
}

bool StructTraits<gfx::mojom::GpuMemoryBufferHandleDataView,
                  gfx::GpuMemoryBufferHandle>::
    Read(gfx::mojom::GpuMemoryBufferHandleDataView data,
         gfx::GpuMemoryBufferHandle* out) {
  out->offset = data.offset();
  out->stride = data.stride();

  return data.ReadPlatformHandle(out);
}
#endif  // BUILDFLAG(USE_BLINK)

}  // namespace mojo
