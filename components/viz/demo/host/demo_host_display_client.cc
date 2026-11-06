// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DemoHostDisplayClient implementation
// summary: Implements the Windows-specific AddChildWindowToBrowser method that parents a child window to the demo host widget.
// ---

#include "components/viz/demo/host/demo_host_display_client.h"

#if BUILDFLAG(IS_WIN)
#include <windows.h>
#endif

namespace demo {

#if BUILDFLAG(IS_WIN)
void DemoHostDisplayClient::AddChildWindowToBrowser(
    gpu::SurfaceHandle child_window) {
  SetParent(child_window, widget());
}
#endif

}  // namespace demo
