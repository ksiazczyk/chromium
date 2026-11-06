// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: X11 client native pixmap factory hook
// summary: Declares the constructor hook that creates the client native pixmap factory for the X11 platform.
// ---

#ifndef UI_OZONE_PLATFORM_X11_CLIENT_NATIVE_PIXMAP_FACTORY_X11_H_
#define UI_OZONE_PLATFORM_X11_CLIENT_NATIVE_PIXMAP_FACTORY_X11_H_

namespace gfx {
class ClientNativePixmapFactory;
}

namespace ui {

// Constructor hook for use in constructor_list.cc
gfx::ClientNativePixmapFactory* CreateClientNativePixmapFactoryX11();

}  // namespace ui

#endif  // UI_OZONE_PLATFORM_X11_CLIENT_NATIVE_PIXMAP_FACTORY_X11_H_
