// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Callback receiver base implementation
// summary: Implements CallbackReceiverBase::RunUntilCalled and Done, which block on a RunLoop until a bound test callback has fired.
// ---

#include "components/feed/core/v2/test/callback_receiver.h"

namespace feed {
namespace internal {
void CallbackReceiverBase::RunUntilCalled() {
  if (called_)
    return;
  if (run_loop_) {
    run_loop_->Run();
  } else {
    base::RunLoop run_loop;
    run_loop_ = &run_loop;
    run_loop.Run();
    run_loop_ = nullptr;
  }
}
void CallbackReceiverBase::Done() {
  called_ = true;
  if (run_loop_)
    run_loop_->Quit();
}

}  // namespace internal
}  // namespace feed
