// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Wallpaper time-of-day scheduler implementation
// summary: Implements WallpaperTimeOfDayScheduler, a ScheduledFeature that registers prefs for scheduling the time-of-day wallpaper between sunset and sunrise.
// ---

#include "ash/wallpaper/wallpaper_time_of_day_scheduler.h"

#include "ash/constants/ash_pref_names.h"
#include "components/prefs/pref_registry_simple.h"

namespace ash {

WallpaperTimeOfDayScheduler::WallpaperTimeOfDayScheduler()
    : ScheduledFeature(prefs::kWallpaperTimeOfDayStatus,
                       prefs::kWallpaperTimeOfDayScheduleType,
                       "",
                       "") {}

// static
void WallpaperTimeOfDayScheduler::RegisterProfilePrefs(
    PrefRegistrySimple* registry) {
  registry->RegisterBooleanPref(prefs::kWallpaperTimeOfDayStatus, false);
  registry->RegisterIntegerPref(
      prefs::kWallpaperTimeOfDayScheduleType,
      static_cast<int>(ScheduleType::kSunsetToSunrise));
}

const char* WallpaperTimeOfDayScheduler::GetFeatureName() const {
  return "WallpaperTimeOfDayScheduler";
}

}  // namespace ash
