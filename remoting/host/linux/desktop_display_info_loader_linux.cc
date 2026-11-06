// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Linux desktop display info loader factory
// summary: Factory that creates the X11 desktop display info loader on Linux.
// ---

#include "remoting/host/desktop_display_info_loader.h"

#include <memory>

#include "remoting/host/linux/desktop_display_info_loader_x11.h"

namespace remoting {

// static
std::unique_ptr<DesktopDisplayInfoLoader> DesktopDisplayInfoLoader::Create() {
  return std::make_unique<DesktopDisplayInfoLoaderX11>();
}

}  // namespace remoting
