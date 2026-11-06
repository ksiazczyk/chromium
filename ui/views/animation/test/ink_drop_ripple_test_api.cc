// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Ink drop ripple test API implementation
// summary: Implements the base InkDropRippleTestApi that provides internal access to an InkDropRipple and hooks into the layer animator test controller.
// ---

#include "ui/views/animation/test/ink_drop_ripple_test_api.h"

namespace views::test {

InkDropRippleTestApi::InkDropRippleTestApi(InkDropRipple* ink_drop_ripple)
    : ui::test::MultiLayerAnimatorTestController(this),
      ink_drop_ripple_(ink_drop_ripple) {}

InkDropRippleTestApi::~InkDropRippleTestApi() = default;

std::vector<ui::LayerAnimator*> InkDropRippleTestApi::GetLayerAnimators() {
  return std::vector<ui::LayerAnimator*>();
}

}  // namespace views::test
