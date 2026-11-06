// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IPC param traits generation for content settings
// summary: Generates IPC param traits read and write methods for content settings types via IPC macro includes.
// ---

// Get basic type definitions.
#include "components/content_settings/core/common/content_settings_param_traits.h"

// Generate param traits write methods.
#include "ipc/param_traits_write_macros.h"
namespace IPC {
#undef COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_PARAM_TRAITS_H_
#include "components/content_settings/core/common/content_settings_param_traits.h"
}  // namespace IPC

// Generate param traits read methods.
#include "ipc/param_traits_read_macros.h"
namespace IPC {
#undef COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_PARAM_TRAITS_H_
#include "components/content_settings/core/common/content_settings_param_traits.h"
}  // namespace IPC
