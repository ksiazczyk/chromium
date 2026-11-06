// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Constructor hook for the Cast Ozone platform
// summary: Declares CreateOzonePlatformCast, the factory hook used by ozone_platform_list.cc to instantiate the Cast Ozone platform.
// ---

#ifndef UI_OZONE_PLATFORM_CAST_OZONE_PLATFORM_CAST_H_
#define UI_OZONE_PLATFORM_CAST_OZONE_PLATFORM_CAST_H_

namespace ui {

class OzonePlatform;

// Constructor hook for use in ozone_platform_list.cc
OzonePlatform* CreateOzonePlatformCast();

}  // namespace ui

#endif  // UI_OZONE_PLATFORM_CAST_OZONE_PLATFORM_CAST_H_
