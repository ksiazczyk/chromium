// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Draw phase enum for VR UI rendering
// summary: Declares the DrawPhase enum ordering background, foreground, and overlay foreground rendering phases for VR UI elements.
// ---

#ifndef CHROME_BROWSER_VR_ELEMENTS_DRAW_PHASE_H_
#define CHROME_BROWSER_VR_ELEMENTS_DRAW_PHASE_H_

#include <string>

namespace vr {

// Each draw phase is rendered independently in the order specified below.
// LINT.IfChange(DrawPhaseType)
enum DrawPhase : int {
  // kPhaseNone is to be used for elements that do not draw. Eg, layouts.
  kPhaseNone = 0,
  kPhaseBackground,
  kPhaseForeground,
  kPhaseOverlayForeground,
  kNumDrawPhases = kPhaseOverlayForeground
};
// LINT.ThenChange(//chrome/browser/vr/elements/draw_phase.cc:DrawPhaseType)

std::string DrawPhaseToString(DrawPhase phase);

}  // namespace vr

#endif  // CHROME_BROWSER_VR_ELEMENTS_DRAW_PHASE_H_
