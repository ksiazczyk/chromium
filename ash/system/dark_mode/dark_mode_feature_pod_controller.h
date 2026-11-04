// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Dark mode feature pod controller header
// summary: Declares the DarkModeFeaturePodController class that manages the dark mode feature tile and observes color mode changes.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /ash/constants/quick_settings_catalogs.h
//   - depends_on /ash/public/cpp/style/color_mode_observer.h
// ---

#ifndef ASH_SYSTEM_DARK_MODE_DARK_MODE_FEATURE_POD_CONTROLLER_H_
#define ASH_SYSTEM_DARK_MODE_DARK_MODE_FEATURE_POD_CONTROLLER_H_

#include "ash/ash_export.h"
#include "ash/constants/quick_settings_catalogs.h"
#include "ash/public/cpp/style/color_mode_observer.h"
#include "ash/system/unified/feature_pod_controller_base.h"
#include "base/memory/raw_ptr.h"

namespace ash {

class UnifiedSystemTrayController;

// Controller of a feature tile that toggles dark mode for ash.
class ASH_EXPORT DarkModeFeaturePodController : public FeaturePodControllerBase,
                                                public ColorModeObserver {
 public:
  explicit DarkModeFeaturePodController(
      UnifiedSystemTrayController* tray_controller);
  DarkModeFeaturePodController(const DarkModeFeaturePodController& other) =
      delete;
  DarkModeFeaturePodController& operator=(
      const DarkModeFeaturePodController& other) = delete;
  ~DarkModeFeaturePodController() override;

  // FeaturePodControllerBase:
  std::unique_ptr<FeatureTile> CreateTile(bool compact = false) override;
  QsFeatureCatalogName GetCatalogName() override;
  void OnIconPressed() override;
  void OnLabelPressed() override;

  // ColorModeObserver:
  void OnColorModeChanged(bool dark_mode_enabled) override;

 private:
  void UpdateTile(bool dark_mode_enabled);

  // Owned by the views hierarchy.
  raw_ptr<FeatureTile, DanglingUntriaged> tile_ = nullptr;

  base::WeakPtrFactory<DarkModeFeaturePodController> weak_ptr_factory_{this};
};

}  // namespace ash

#endif  // ASH_SYSTEM_DARK_MODE_DARK_MODE_FEATURE_POD_CONTROLLER_H_
