// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ShellDelegate default method implementations
// summary: Provides default implementations of ShellDelegate virtual methods, returning permissive or empty values for touch actions, media session, and UI dev tools.
// relations:
//   - implements /ash/shell_delegate.h
// ---

#include "ash/shell_delegate.h"

namespace ash {

bool ShellDelegate::AllowDefaultTouchActions(gfx::NativeWindow window) {
  return true;
}

bool ShellDelegate::ShouldWaitForTouchPressAck(gfx::NativeWindow window) {
  return false;
}

media_session::MediaSessionService* ShellDelegate::GetMediaSessionService() {
  return nullptr;
}

bool ShellDelegate::IsUiDevToolsStarted() const {
  return false;
}

int ShellDelegate::GetUiDevToolsPort() const {
  return -1;
}

const GURL& ShellDelegate::GetLastCommittedURLForWindowIfAny(
    aura::Window* window) {
  return GURL::EmptyGURL();
}

bool ShellDelegate::IsNoFirstRunSwitchOn() const {
  return false;
}

}  // namespace ash
