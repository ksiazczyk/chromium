// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Ozone platform X11 factory hook
// summary: Declares CreateOzonePlatformX11, the constructor hook used by ozone_platform_list.cc to instantiate the X11 Ozone platform.
// ---

#ifndef UI_OZONE_PLATFORM_X11_OZONE_PLATFORM_X11_H_
#define UI_OZONE_PLATFORM_X11_OZONE_PLATFORM_X11_H_

namespace ui {

class OzonePlatform;

// Constructor hook for use in ozone_platform_list.cc
OzonePlatform* CreateOzonePlatformX11();

}  // namespace ui

#endif  // UI_OZONE_PLATFORM_X11_OZONE_PLATFORM_X11_H_
