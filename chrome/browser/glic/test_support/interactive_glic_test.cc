// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Interactive Glic test implementation
// summary: Defines DeepQuery selectors for the mock Glic UI and string output for the TargetWebContents enum.
// ---

#include "chrome/browser/glic/test_support/interactive_glic_test.h"

#include "chrome/test/interaction/interactive_browser_test.h"

namespace glic::test {

const InteractiveBrowserTestApi::DeepQuery kPathToMockGlicCloseButton = {
    "#closebn"};
const InteractiveBrowserTestApi::DeepQuery kPathToGuestPanel = {
    ".panel#guestPanel"};

std::ostream& operator<<(std::ostream& os, const TargetWebContents& value) {
  switch (value) {
    case TargetWebContents::kGlicWebUi:
      return os << "GlicWebUi";
    case TargetWebContents::kGlicClient:
      return os << "GlicClient";
  }
}

}  // namespace glic::test
