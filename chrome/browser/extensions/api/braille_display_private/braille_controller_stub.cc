// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Stub BrailleController instance accessor
// summary: Provides a GetInstance implementation that returns the stub braille controller when brlapi support is not built.
// ---

#include "chrome/browser/extensions/api/braille_display_private/braille_controller.h"

#include "chrome/browser/extensions/api/braille_display_private/stub_braille_controller.h"

namespace extensions {
namespace api {
namespace braille_display_private {

// static
BrailleController* BrailleController::GetInstance() {
  return StubBrailleController::GetInstance();
}

}  // namespace braille_display_private
}  // namespace api
}  // namespace extensions
