// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Ozone desktop screen interface
// summary: Declares DesktopScreenOzone, an aura::ScreenOzone subclass that resolves native windows from accelerated widgets on Ozone platforms.
// ---

#ifndef UI_VIEWS_WIDGET_DESKTOP_AURA_DESKTOP_SCREEN_OZONE_H_
#define UI_VIEWS_WIDGET_DESKTOP_AURA_DESKTOP_SCREEN_OZONE_H_

#include "ui/aura/screen_ozone.h"
#include "ui/views/views_export.h"

namespace views {

class VIEWS_EXPORT DesktopScreenOzone : public aura::ScreenOzone {
 public:
  DesktopScreenOzone();
  DesktopScreenOzone(const DesktopScreenOzone&) = delete;
  DesktopScreenOzone& operator=(const DesktopScreenOzone&) = delete;
  ~DesktopScreenOzone() override;

 private:
  // ui::aura::ScreenOzone:
  gfx::NativeWindow GetNativeWindowFromAcceleratedWidget(
      gfx::AcceleratedWidget widget) const override;
};

}  // namespace views

#endif  // UI_VIEWS_WIDGET_DESKTOP_AURA_DESKTOP_SCREEN_OZONE_H_
