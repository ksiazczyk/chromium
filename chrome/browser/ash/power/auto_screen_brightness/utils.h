// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Auto screen brightness utility functions
// summary: Declares helper functions for the auto screen brightness feature, including converting values to natural log and formatting percentage values for printing.
// ---

#ifndef CHROME_BROWSER_ASH_POWER_AUTO_SCREEN_BRIGHTNESS_UTILS_H_
#define CHROME_BROWSER_ASH_POWER_AUTO_SCREEN_BRIGHTNESS_UTILS_H_

#include <string>
#include <vector>

#include "base/containers/ring_buffer.h"

namespace ash {
namespace power {
namespace auto_screen_brightness {

// Returns natural log of 1+|value|.
double ConvertToLog(double value);

// Formats a double value that represents percentages.
std::string FormatToPrint(double value);

}  // namespace auto_screen_brightness
}  // namespace power
}  // namespace ash

#endif  // CHROME_BROWSER_ASH_POWER_AUTO_SCREEN_BRIGHTNESS_UTILS_H_
