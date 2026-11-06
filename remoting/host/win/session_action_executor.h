// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Session action executor header
// summary: Declares SessionActionExecutor, which dispatches action requests like SAS injection and workstation locking.
// ---

#ifndef REMOTING_HOST_WIN_SESSION_ACTION_EXECUTOR_H_
#define REMOTING_HOST_WIN_SESSION_ACTION_EXECUTOR_H_

#include "base/functional/callback.h"
#include "base/memory/scoped_refptr.h"
#include "remoting/host/action_executor.h"

namespace base {
class SingleThreadTaskRunner;
}  // namespace base

namespace remoting {

class SessionActionExecutor : public ActionExecutor {
 public:
  // |inject_sas| and |lock_workstation| are invoked on
  // |execute_action_task_runner|.
  SessionActionExecutor(
      scoped_refptr<base::SingleThreadTaskRunner> execute_action_task_runner,
      const base::RepeatingClosure& inject_sas,
      const base::RepeatingClosure& lock_workstation);

  SessionActionExecutor(const SessionActionExecutor&) = delete;
  SessionActionExecutor& operator=(const SessionActionExecutor&) = delete;

  ~SessionActionExecutor() override;

  // ActionExecutor implementation.
  void ExecuteAction(const protocol::ActionRequest& request) override;

 private:
  scoped_refptr<base::SingleThreadTaskRunner> execute_action_task_runner_;

  // Injects the Secure Attention Sequence.
  base::RepeatingClosure inject_sas_;

  // Locks the current session.
  base::RepeatingClosure lock_workstation_;
};

}  // namespace remoting

#endif  // REMOTING_HOST_WIN_SESSION_ACTION_EXECUTOR_H_
