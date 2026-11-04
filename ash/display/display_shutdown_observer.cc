// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Display shutdown observer implementation
// summary: Implements the observer that tells the display configurator to prepare for exit when the Chrome shutdown process starts, stopping display configuration handling.
// relations:
//   - depends_on /ash/display/display_shutdown_observer.h
//   - depends_on /ui/display/manager/display_configurator.h
// ---

#include "ash/display/display_shutdown_observer.h"

#include "ui/display/manager/display_configurator.h"

namespace ash {

DisplayShutdownObserver::DisplayShutdownObserver(
    display::DisplayConfigurator* display_configurator)
    : display_configurator_(display_configurator),
      scoped_session_observer_(this) {}

DisplayShutdownObserver::~DisplayShutdownObserver() = default;

void DisplayShutdownObserver::OnChromeTerminating() {
  // Stop handling display configuration events once the shutdown
  // process starts. http://crbug.com/177014.
  display_configurator_->PrepareForExit();
}

}  // namespace ash
