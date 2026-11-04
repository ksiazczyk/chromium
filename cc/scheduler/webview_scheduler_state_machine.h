// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebviewSchedulerStateMachine class declaration
// summary: Declares the WebviewSchedulerStateMachine class, a SchedulerStateMachine subclass that overrides WebView-specific scheduling behaviors such as sync tree activation, main frame blocking, and deadline modes.
// ---

#ifndef CC_SCHEDULER_WEBVIEW_SCHEDULER_STATE_MACHINE_H_
#define CC_SCHEDULER_WEBVIEW_SCHEDULER_STATE_MACHINE_H_

#include "cc/cc_export.h"
#include "cc/scheduler/scheduler_settings.h"
#include "cc/scheduler/scheduler_state_machine.h"

namespace cc {

class CC_EXPORT WebviewSchedulerStateMachine : public SchedulerStateMachine {
 public:
  explicit WebviewSchedulerStateMachine(const SchedulerSettings& settings);
  ~WebviewSchedulerStateMachine() override;

  bool ShouldActivateSyncTreeBeforeDraw() const override;
  bool ShouldBlockBeginMainFrameWhenIdle() const override;
  bool ShouldInvalidateLayerTreeFrameSink() const override;
  BeginImplFrameDeadlineMode CurrentBeginImplFrameDeadlineMode() const override;
};
}  // namespace cc

#endif  // CC_SCHEDULER_WEBVIEW_SCHEDULER_STATE_MACHINE_H_
