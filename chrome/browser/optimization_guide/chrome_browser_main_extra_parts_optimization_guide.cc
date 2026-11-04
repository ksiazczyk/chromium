// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser extra parts initializing optimization guide global state
// summary: Initializes the optimization guide global state after browser start so on-device model metrics can be logged reliably.
// ---

#include "chrome/browser/optimization_guide/chrome_browser_main_extra_parts_optimization_guide.h"

#include "chrome/browser/optimization_guide/model_execution/optimization_guide_global_state.h"

// Ensures global state initialization, so we can have reliable logging of
// on-device model metrics post start-up.
void ChromeBrowserMainExtraPartsOptimizationGuide::PostBrowserStart() {
  optimization_guide::OptimizationGuideGlobalState::CreateOrGet();
}
