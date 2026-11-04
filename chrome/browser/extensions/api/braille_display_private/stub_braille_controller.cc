// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Stub braille controller implementation
// summary: No-op BrailleController singleton that returns an empty display state and ignores dot writes and observer changes.
// ---

#include "chrome/browser/extensions/api/braille_display_private/stub_braille_controller.h"

#include <memory>

#include "base/memory/singleton.h"

namespace extensions {
namespace api {
namespace braille_display_private {

StubBrailleController::StubBrailleController() = default;

std::unique_ptr<DisplayState> StubBrailleController::GetDisplayState() {
  return std::make_unique<DisplayState>();
}

void StubBrailleController::WriteDots(const std::vector<uint8_t>& cells,
                                      unsigned int cols,
                                      unsigned int rows) {}

void StubBrailleController::AddObserver(BrailleObserver* observer) {
}

void StubBrailleController::RemoveObserver(BrailleObserver* observer) {
}

StubBrailleController* StubBrailleController::GetInstance() {
  return base::Singleton<
      StubBrailleController,
      base::LeakySingletonTraits<StubBrailleController>>::get();
}

}  // namespace braille_display_private
}  // namespace api
}  // namespace extensions
