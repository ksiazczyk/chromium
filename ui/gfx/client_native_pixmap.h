// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ClientNativePixmap interface
// summary: Interface for a buffer that regular CPU code can map and write while the GPU can also read it, defining plane mapping, memory access, stride, and IPC handle cloning.
// ---

#ifndef UI_GFX_CLIENT_NATIVE_PIXMAP_H_
#define UI_GFX_CLIENT_NATIVE_PIXMAP_H_

#include <stdint.h>

#include "base/component_export.h"
#include "base/containers/span.h"

namespace gfx {

struct NativePixmapHandle;

// This represents a buffer that can be written to directly by regular CPU code,
// but can also be read by the GPU.
// NativePixmap is its counterpart in GPU process.
class COMPONENT_EXPORT(GFX) ClientNativePixmap {
 public:
  virtual ~ClientNativePixmap() {}

  // Map each plane in the client address space.
  // Return false on error.
  virtual bool Map() = 0;
  virtual void Unmap() = 0;

  virtual size_t GetNumberOfPlanes() const = 0;
  virtual base::span<uint8_t> GetMemoryAsSpan(size_t plane) = 0;
  virtual int GetStride(size_t plane) const = 0;
  virtual NativePixmapHandle CloneHandleForIPC() const = 0;
};

}  // namespace gfx

#endif  // UI_GFX_CLIENT_NATIVE_PIXMAP_H_
