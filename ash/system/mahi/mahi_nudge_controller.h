// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mahi nudge controller header
// summary: Declares MahiNudgeController, which shows the educational nudge for the Help me read feature and registers its related profile preferences.
// relations:
//   - depends_on /ash/ash_export.h
// ---

#ifndef ASH_SYSTEM_MAHI_MAHI_NUDGE_CONTROLLER_H_
#define ASH_SYSTEM_MAHI_MAHI_NUDGE_CONTROLLER_H_

#include "ash/ash_export.h"

class PrefRegistrySimple;

namespace ash {

// Controller for showing the educational nudge for the "Help me read" feature.
class ASH_EXPORT MahiNudgeController {
 public:
  MahiNudgeController();
  MahiNudgeController(const MahiNudgeController&) = delete;
  MahiNudgeController& operator=(const MahiNudgeController&) = delete;
  ~MahiNudgeController();

  static void RegisterProfilePrefs(PrefRegistrySimple* registry);

  // Attempts to show the nudge. The nudge will show if it hasn't been shown in
  // the past 24 hours, or if it has been shown less than three times.
  void MaybeShowNudge();
};

}  // namespace ash

#endif  // ASH_SYSTEM_MAHI_MAHI_NUDGE_CONTROLLER_H_
