// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Input data provider touch header
// summary: Declares the InputDataProviderTouch helper that provides touch-specific logic to the diagnostics input data provider.
// ---

#ifndef ASH_WEBUI_DIAGNOSTICS_UI_BACKEND_INPUT_INPUT_DATA_PROVIDER_TOUCH_H_
#define ASH_WEBUI_DIAGNOSTICS_UI_BACKEND_INPUT_INPUT_DATA_PROVIDER_TOUCH_H_

#include "ash/webui/diagnostics_ui/mojom/input_data_provider.mojom.h"

namespace ash {
namespace diagnostics {

class InputDeviceInformation;

// Helper to provide InputDataProvider diagnostic interface with touch-specific
// logic.
class InputDataProviderTouch {
 public:
  InputDataProviderTouch();
  InputDataProviderTouch(const InputDataProviderTouch&) = delete;
  InputDataProviderTouch& operator=(const InputDataProviderTouch&) = delete;
  ~InputDataProviderTouch();

  mojom::TouchDeviceInfoPtr ConstructTouchDevice(
      const InputDeviceInformation* device_info,
      bool is_internal_display_on);
};

}  // namespace diagnostics
}  // namespace ash

#endif  // ASH_WEBUI_DIAGNOSTICS_UI_BACKEND_INPUT_INPUT_DATA_PROVIDER_TOUCH_H_
