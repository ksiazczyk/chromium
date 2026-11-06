// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IconSizeCalculator implementation
// summary: Implements ideal and minimum payment icon height calculations based on the device scale factor for a given native view.
// ---

#include "components/payments/content/icon/icon_size.h"

#include "ui/display/display.h"
#include "ui/display/screen.h"

namespace payments {

namespace {

float DeviceScaleFactor(gfx::NativeView view) {
  DCHECK(display::Screen::Get());
  return display::Screen::Get()->GetPreferredScaleFactorForView(view).value_or(
      1.0f);
}

}  // namespace

// static
int IconSizeCalculator::IdealIconHeight(gfx::NativeView view) {
  return DeviceScaleFactor(view) * kPaymentAppDeviceIndependentIdealIconHeight;
}

// static
int IconSizeCalculator::MinimumIconHeight() {
  return 0;
}

}  // namespace payments
