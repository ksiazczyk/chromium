// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: i18n command-line switch declarations
// summary: Declares the exported switch constants for forcing UI and text rendering direction used elsewhere in the codebase.
// ---

#ifndef BASE_I18N_BASE_I18N_SWITCHES_H_
#define BASE_I18N_BASE_I18N_SWITCHES_H_

#include "base/i18n/base_i18n_export.h"

namespace switches {

BASE_I18N_EXPORT extern const char kForceUIDirection[];
BASE_I18N_EXPORT extern const char kForceTextDirection[];

// kForce*Direction choices for the switches above.
BASE_I18N_EXPORT extern const char kForceDirectionLTR[];
BASE_I18N_EXPORT extern const char kForceDirectionRTL[];

}  // namespace switches

#endif  // BASE_I18N_BASE_I18N_SWITCHES_H_
