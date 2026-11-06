// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Permission command-line switches
// summary: Defines the deny-permission-prompts switch that suppresses permission prompts by denying them instead of showing UI.
// ---

#include "components/permissions/switches.h"

namespace permissions {
namespace switches {

// Prevents permission prompts from appearing by denying instead of showing
// prompts.
const char kDenyPermissionPrompts[] = "deny-permission-prompts";

}  // namespace switches
}  // namespace permissions
