// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Wayland client native pixmap factory implementation
// summary: Creates the client native pixmap factory for the Wayland platform, returning a dmabuf-based factory when GBM support is enabled and a stub otherwise.
// ---

#include "ui/ozone/platform/wayland/client_native_pixmap_factory_wayland.h"

#include "ui/gfx/linux/client_native_pixmap_factory_dmabuf.h"
#include "ui/ozone/common/stub_client_native_pixmap_factory.h"
#include "ui/ozone/public/ozone_platform.h"

namespace ui {

gfx::ClientNativePixmapFactory* CreateClientNativePixmapFactoryWayland() {
#if defined(WAYLAND_GBM)
  return gfx::CreateClientNativePixmapFactoryDmabuf();
#else
  return CreateStubClientNativePixmapFactory();
#endif
}

}  // namespace ui
