// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default gesture configuration
// summary: Provides the default GestureConfiguration singleton used on platforms without specific settings, such as Mac.
// ---

#include "ui/events/gesture_detection/gesture_configuration.h"

#include "base/memory/singleton.h"
#include "ui/display/screen.h"

namespace ui {
namespace {
class GestureConfigurationDefault : public GestureConfiguration {
 public:
  GestureConfigurationDefault(const GestureConfigurationDefault&) = delete;
  GestureConfigurationDefault& operator=(const GestureConfigurationDefault&) =
      delete;

  ~GestureConfigurationDefault() override {
  }

  static GestureConfigurationDefault* GetInstance() {
    return base::Singleton<GestureConfigurationDefault>::get();
  }

 private:
  GestureConfigurationDefault() {}

  friend struct base::DefaultSingletonTraits<GestureConfigurationDefault>;
};

}  // namespace

// Create a GestureConfiguration singleton instance when using Mac.
GestureConfiguration* GestureConfiguration::GetPlatformSpecificInstance() {
  return GestureConfigurationDefault::GetInstance();
}

}  // namespace ui
