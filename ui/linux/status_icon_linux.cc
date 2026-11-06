// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: StatusIconLinux base implementation
// summary: Implements the StatusIconLinux base class, managing its delegate pointer and default context menu refresh behavior.
// ---

#include "ui/linux/status_icon_linux.h"

namespace ui {

StatusIconLinux::Delegate::~Delegate() = default;

StatusIconLinux::StatusIconLinux() = default;

StatusIconLinux::~StatusIconLinux() {
  delegate_ = nullptr;
}

void StatusIconLinux::RefreshPlatformContextMenu() {}

void StatusIconLinux::OnSetDelegate() {}

void StatusIconLinux::SetDelegate(Delegate* delegate) {
  delegate_ = delegate;
  OnSetDelegate();
}

}  // namespace ui
