// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test delegate for the extension enable flow
// summary: Implements a test delegate that records the enable flow result and blocks on a RunLoop until the flow finishes or aborts.
// ---

#include "chrome/browser/ui/extensions/extension_enable_flow_test_delegate.h"

ExtensionEnableFlowTestDelegate::ExtensionEnableFlowTestDelegate() = default;
ExtensionEnableFlowTestDelegate::~ExtensionEnableFlowTestDelegate() = default;

void ExtensionEnableFlowTestDelegate::ExtensionEnableFlowFinished() {
  result_ = FINISHED;
  run_loop_.Quit();
}

void ExtensionEnableFlowTestDelegate::ExtensionEnableFlowAborted(
    bool user_initiated) {
  result_ = ABORTED;
  run_loop_.Quit();
}

void ExtensionEnableFlowTestDelegate::Wait() {
  run_loop_.Run();
}
