// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake default browser setter implementation
// summary: Implements FakeDefaultBrowserSetter, a test double that reports the browser as already default when the setter executes.
// ---

#include "chrome/browser/default_browser/test_support/fake_default_browser_setter.h"

#include <utility>

#include "base/functional/callback.h"
#include "chrome/browser/default_browser/default_browser_setter.h"

namespace default_browser {

DefaultBrowserSetterType FakeDefaultBrowserSetter::GetType() const {
  return DefaultBrowserSetterType::kShellIntegration;
}

void FakeDefaultBrowserSetter::Execute(
    DefaultBrowserSetterCompletionCallback on_complete,
    const ExecuteParams& /*params*/) {
  std::move(on_complete).Run(DefaultBrowserState::IS_DEFAULT);
}

}  // namespace default_browser
