// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: LayerTreeHostDelegate paused message
// summary: Implements a LayerTreeHostDelegate helper that returns the localized message shown when the debugger is paused in another tab.
// ---

#include "cc/trees/layer_tree_host_delegate.h"

namespace cc {

std::string LayerTreeHostDelegate::GetPausedDebuggerLocalizedMessage() {
  return "Debugger paused in another tab, click to switch to that tab.";
}

}  // namespace cc
