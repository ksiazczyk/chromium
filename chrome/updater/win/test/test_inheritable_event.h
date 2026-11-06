// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Inheritable waitable event declaration
// summary: Declares CreateInheritableEvent, which creates a waitable event whose handle can be inherited by child processes.
// ---

#ifndef CHROME_UPDATER_WIN_TEST_TEST_INHERITABLE_EVENT_H_
#define CHROME_UPDATER_WIN_TEST_TEST_INHERITABLE_EVENT_H_

#include <memory>

#include "base/synchronization/waitable_event.h"

namespace updater {

std::unique_ptr<base::WaitableEvent> CreateInheritableEvent(
    base::WaitableEvent::ResetPolicy reset_policy,
    base::WaitableEvent::InitialState initial_state);

}  // namespace updater

#endif  // CHROME_UPDATER_WIN_TEST_TEST_INHERITABLE_EVENT_H_
