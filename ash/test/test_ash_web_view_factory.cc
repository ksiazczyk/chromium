// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test AshWebView factory implementation
// summary: Implements a test AshWebViewFactory whose Create method returns TestAshWebView instances for unittests.
// ---

#include "ash/test/test_ash_web_view_factory.h"

#include "ash/test/test_ash_web_view.h"

namespace ash {

TestAshWebViewFactory::TestAshWebViewFactory() = default;

TestAshWebViewFactory::~TestAshWebViewFactory() = default;

std::unique_ptr<AshWebView> TestAshWebViewFactory::Create(
    const AshWebView::InitParams& params) {
  return std::make_unique<TestAshWebView>(params);
}

}  // namespace ash
