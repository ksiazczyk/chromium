// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HID preserving Bluetooth metrics recording
// summary: Records histograms for the HID warning dialog, including whether it was shown, the user's keep-on or turn-off action, and the dialog's source.
// relations:
//   - implements /ash/system/bluetooth/hid_preserving_controller/hid_preserving_bluetooth_metrics.h
//   - references /base/metrics/histogram_functions.h
//   - references /ash/public/mojom/hid_preserving_bluetooth_state_controller.mojom
// ---

#include "ash/system/bluetooth/hid_preserving_controller/hid_preserving_bluetooth_metrics.h"

#include "base/metrics/histogram_functions.h"

namespace ash::bluetooth {

void RecordHidPoweredStateDisableBehavior(bool dialog_shown) {
  const DisabledBehavior disabled_behavior =
      dialog_shown ? DisabledBehavior::kWarningDialogShown
                   : DisabledBehavior::kWarningDialogNotShown;
  base::UmaHistogramEnumeration(kPoweredDisableDialogBehavior,
                                disabled_behavior);
}

void RecordHidWarningUserAction(bool disabled_bluetooth) {
  const UserAction user_action =
      disabled_bluetooth ? UserAction::kTurnOff : UserAction::kKeepOn;
  base::UmaHistogramEnumeration(kUserAction, user_action);
}

void RecordHidWarningDialogSource(mojom::HidWarningDialogSource dialog_source) {
  const DialogSource source =
      dialog_source == mojom::HidWarningDialogSource::kQuickSettings
          ? DialogSource::kQuickSettings
          : DialogSource::kOsSettings;
  base::UmaHistogramEnumeration(kDialogSource, source);
}

}  // namespace ash::bluetooth
