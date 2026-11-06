// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Nudge utility header for notifier framework histograms
// summary: Declares the notifier framework nudge shown-count histogram constant and a helper that builds time-to-action histogram names from a time delta.
// ---

#ifndef CHROMEOS_UI_BASE_NUDGE_UTIL_H_
#define CHROMEOS_UI_BASE_NUDGE_UTIL_H_

#include <string>

#include "base/component_export.h"
#include "base/time/time.h"

namespace chromeos {

// Histogram name when a nudge is shown using the notifier framework.
constexpr char kNotifierFrameworkNudgeShownCountHistogram[] =
    "Ash.NotifierFramework.Nudge.ShownCount";

// Returns a string in the format of
// "Ash.NotifierFramework.Nudge.TimeToAction.%s" where the placeholder depends
// on `time` and is either "Within1m", "Within1h" or "WithinSession".
COMPONENT_EXPORT(CHROMEOS_UI_BASE)
std::string GetNudgeTimeToActionHistogramName(base::TimeDelta time);

}  // namespace chromeos

#endif  // CHROMEOS_UI_BASE_NUDGE_UTIL_H_
