// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scoped XDG activation token injector implementation
// summary: Implements a scoped helper that temporarily adds the XDG activation token switch to a command line and removes it on destruction.
// ---

#include "base/nix/scoped_xdg_activation_token_injector.h"

#include "base/command_line.h"
#include "base/environment.h"
#include "base/nix/xdg_util.h"

namespace base::nix {

ScopedXdgActivationTokenInjector::ScopedXdgActivationTokenInjector(
    base::CommandLine& command_line,
    base::Environment& env)
    : command_line_(command_line) {
  if (auto token = ExtractXdgActivationTokenFromEnv(env); token.has_value()) {
    command_line.AppendSwitchASCII(kXdgActivationTokenSwitch, *token);
    token_injected_ = true;
  }
}

ScopedXdgActivationTokenInjector::~ScopedXdgActivationTokenInjector() {
  if (token_injected_) {
    command_line_->RemoveSwitch(kXdgActivationTokenSwitch);
  }
}

}  // namespace base::nix
