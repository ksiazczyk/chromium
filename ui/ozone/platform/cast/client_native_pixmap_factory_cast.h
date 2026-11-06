// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cast client native pixmap factory header
// summary: Declares the factory creation hook used by the Ozone constructor list to instantiate the Cast client native pixmap factory.
// ---

#ifndef UI_OZONE_PLATFORM_CAST_CLIENT_NATIVE_PIXMAP_FACTORY_CAST_H_
#define UI_OZONE_PLATFORM_CAST_CLIENT_NATIVE_PIXMAP_FACTORY_CAST_H_

namespace gfx {
class ClientNativePixmapFactory;
}

namespace ui {

// Constructor hook for use in constructor_list.cc
gfx::ClientNativePixmapFactory* CreateClientNativePixmapFactoryCast();

}  // namespace ui

#endif  // UI_OZONE_PLATFORM_CAST_CLIENT_NATIVE_PIXMAP_FACTORY_CAST_H_
