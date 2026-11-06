// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Recovery default state utility header
// summary: Declares GetRecoveryDefaultState, which reports whether the recovery auth factor should be activated by default or policy for managed and non-managed users.
// ---

#ifndef CHROMEOS_ASH_COMPONENTS_LOGIN_AUTH_RECOVERY_RECOVERY_UTILS_H_
#define CHROMEOS_ASH_COMPONENTS_LOGIN_AUTH_RECOVERY_RECOVERY_UTILS_H_

#include "base/component_export.h"

class PrefService;

namespace ash {

// Returns `true` if the recovery auth factor should be activated (by default or
// by policy), and `false` otherwise.
// - For non-managed users this value should be
// used only in opt-in UIs. In-session - call cryptohome to find out whether
// recovery factor is configured.
// - For managed users this value may change due to
// the policy change and may not correspond to the actual state in cryptohome.
// `is_managed` states whether the user is managed.
COMPONENT_EXPORT(CHROMEOS_ASH_COMPONENTS_LOGIN_AUTH)
bool GetRecoveryDefaultState(bool is_managed, PrefService* prefs);

}  // namespace ash

#endif  // CHROMEOS_ASH_COMPONENTS_LOGIN_AUTH_RECOVERY_RECOVERY_UTILS_H_
