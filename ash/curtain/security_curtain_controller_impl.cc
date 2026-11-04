// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Security curtain controller implementation
// summary: Implements the security curtain controller by creating and tearing down a curtain Session on the Ash shell.
// relations:
//   - implements /ash/curtain/security_curtain_controller_impl.h
//   - depends_on /ash/curtain/session.h
//   - depends_on /ash/shell.h
// ---

#include "ash/curtain/security_curtain_controller_impl.h"

#include "ash/curtain/session.h"
#include "ash/shell.h"

namespace ash::curtain {

SecurityCurtainControllerImpl::SecurityCurtainControllerImpl(ash::Shell* shell)
    : shell_(*shell) {}

SecurityCurtainControllerImpl::~SecurityCurtainControllerImpl() = default;

void SecurityCurtainControllerImpl::Enable(InitParams params) {
  CHECK_EQ(session_, nullptr);
  session_ = std::make_unique<Session>(&*shell_, params);
  session_->Init();
}

void SecurityCurtainControllerImpl::Disable() {
  session_ = nullptr;
}

bool SecurityCurtainControllerImpl::IsEnabled() const {
  return session_ != nullptr;
}

}  // namespace ash::curtain
