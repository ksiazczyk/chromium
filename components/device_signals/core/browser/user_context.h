// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: User context struct
// summary: Declares the UserContext struct holding the GAIA ID of the user for signal collection permission checks.
// ---

#ifndef COMPONENTS_DEVICE_SIGNALS_CORE_BROWSER_USER_CONTEXT_H_
#define COMPONENTS_DEVICE_SIGNALS_CORE_BROWSER_USER_CONTEXT_H_

#include "google_apis/gaia/gaia_id.h"

namespace device_signals {

struct UserContext {
  // GAIA ID of the user.
  GaiaId user_id;
};

bool operator==(const UserContext& l, const UserContext& r);

}  // namespace device_signals

#endif  // COMPONENTS_DEVICE_SIGNALS_CORE_BROWSER_USER_CONTEXT_H_
