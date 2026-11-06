// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: LinuxUiDelegate base implementation
// summary: Implements LinuxUiDelegate singleton instance management and a default SetTransientWindowForParent that aborts on platforms not implementing it.
// ---

#include "ui/linux/linux_ui_delegate.h"

#include "base/check_op.h"
#include "base/notreached.h"

namespace ui {

// static
LinuxUiDelegate* LinuxUiDelegate::instance_ = nullptr;

// static
LinuxUiDelegate* LinuxUiDelegate::GetInstance() {
  return instance_;
}

LinuxUiDelegate::LinuxUiDelegate() {
  DCHECK(!instance_);
  instance_ = this;
}

LinuxUiDelegate::~LinuxUiDelegate() {
  DCHECK_EQ(instance_, this);
  instance_ = nullptr;
}

void LinuxUiDelegate::SetTransientWindowForParent(
    gfx::AcceleratedWidget parent,
    gfx::AcceleratedWidget transient) {
  // This function should not be called when using a platform that doesn't
  // implement it.
  NOTREACHED();
}

}  // namespace ui
