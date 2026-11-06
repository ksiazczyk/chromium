// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ARC window property utility
// summary: Declares helpers that read the ARC app ID from an aura window or a views widget for compat mode code.
// ---

#ifndef CHROMEOS_ASH_EXPERIENCES_ARC_COMPAT_MODE_ARC_WINDOW_PROPERTY_UTIL_H_
#define CHROMEOS_ASH_EXPERIENCES_ARC_COMPAT_MODE_ARC_WINDOW_PROPERTY_UTIL_H_

#include <optional>
#include <string>

namespace views {
class Widget;
}  // namespace views

namespace aura {
class Window;
}  // namespace aura

namespace arc {

std::optional<std::string> GetAppId(const aura::Window* window);
std::optional<std::string> GetAppId(const views::Widget* widget);

}  // namespace arc

#endif  // CHROMEOS_ASH_EXPERIENCES_ARC_COMPAT_MODE_ARC_WINDOW_PROPERTY_UTIL_H_
