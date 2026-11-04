// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Candidate window controller factory
// summary: Factory function that creates the Chrome OS candidate window controller implementation for the input method candidate window.
// ---

#include "chrome/browser/ash/input_method/candidate_window_controller.h"

#include "chrome/browser/ash/input_method/candidate_window_controller_impl.h"

namespace ash {
namespace input_method {

// static
CandidateWindowController*
CandidateWindowController::CreateCandidateWindowController() {
  return new CandidateWindowControllerImpl;
}

}  // namespace input_method
}  // namespace ash
