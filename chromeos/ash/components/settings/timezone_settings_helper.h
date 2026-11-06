// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Timezone matching helper header
// summary: Declares GetKnownTimezoneOrNull, a helper that finds a known timezone matching an input timezone or returns null.
// ---

#ifndef CHROMEOS_ASH_COMPONENTS_SETTINGS_TIMEZONE_SETTINGS_HELPER_H_
#define CHROMEOS_ASH_COMPONENTS_SETTINGS_TIMEZONE_SETTINGS_HELPER_H_

#include <memory>
#include <vector>

#include "base/component_export.h"
#include "third_party/icu/source/i18n/unicode/timezone.h"

namespace ash::system {

// Return a timezone in the list matching |timezone| in terms of
// id and canonical id. If both fail, return a timezone with
// the same rules. Otherwise, return null.
COMPONENT_EXPORT(CHROMEOS_ASH_COMPONENTS_SETTINGS)
const icu::TimeZone* GetKnownTimezoneOrNull(
    const icu::TimeZone& timezone,
    const std::vector<std::unique_ptr<icu::TimeZone>>& timezone_list);

}  // namespace ash::system

#endif  // CHROMEOS_ASH_COMPONENTS_SETTINGS_TIMEZONE_SETTINGS_HELPER_H_
