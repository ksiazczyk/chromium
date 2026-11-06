// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Headless client native pixmap factory header
// summary: Declares CreateClientNativePixmapFactoryHeadless, the constructor hook used by the Ozone constructor list for the headless platform.
// ---

#ifndef UI_OZONE_PLATFORM_HEADLESS_CLIENT_NATIVE_PIXMAP_FACTORY_HEADLESS_H_
#define UI_OZONE_PLATFORM_HEADLESS_CLIENT_NATIVE_PIXMAP_FACTORY_HEADLESS_H_

namespace gfx {
class ClientNativePixmapFactory;
}

namespace ui {

// Constructor hook for use in constructor_list.cc
gfx::ClientNativePixmapFactory* CreateClientNativePixmapFactoryHeadless();

}  // namespace ui

#endif  // UI_OZONE_PLATFORM_HEADLESS_CLIENT_NATIVE_PIXMAP_FACTORY_HEADLESS_H_
