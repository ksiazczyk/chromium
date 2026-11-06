// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Stub LinuxUiDelegate implementation
// summary: Provides a stub LinuxUiDelegate that reports the stub backend and runs window handle export callbacks with an empty string.
// ---

#include "ui/linux/linux_ui_delegate_stub.h"

#include "base/functional/callback.h"

namespace ui {

LinuxUiDelegateStub::LinuxUiDelegateStub() = default;

LinuxUiDelegateStub::~LinuxUiDelegateStub() = default;

LinuxUiBackend LinuxUiDelegateStub::GetBackend() const {
  return LinuxUiBackend::kStub;
}

void LinuxUiDelegateStub::ExportWindowHandle(
    gfx::AcceleratedWidget window_id,
    base::OnceCallback<void(std::string)> callback) {
  std::move(callback).Run("");
}

}  // namespace ui
