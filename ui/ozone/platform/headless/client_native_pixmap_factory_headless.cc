// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Headless client native pixmap factory
// summary: Creates a stub client native pixmap factory for the headless Ozone platform by delegating to the common stub implementation.
// ---

#include "ui/ozone/platform/headless/client_native_pixmap_factory_headless.h"

#include "ui/ozone/common/stub_client_native_pixmap_factory.h"

namespace ui {

gfx::ClientNativePixmapFactory* CreateClientNativePixmapFactoryHeadless() {
  return CreateStubClientNativePixmapFactory();
}

}  // namespace ui
