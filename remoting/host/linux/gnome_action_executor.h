// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GNOME action executor class declaration
// summary: Declares a GNOME-specific ActionExecutor that performs remote actions such as locking the screen via D-Bus.
// ---

#ifndef REMOTING_HOST_LINUX_GNOME_ACTION_EXECUTOR_H_
#define REMOTING_HOST_LINUX_GNOME_ACTION_EXECUTOR_H_

#include "remoting/host/action_executor.h"
#include "remoting/host/linux/gdbus_connection_ref.h"

namespace remoting {

class GnomeActionExecutor : public ActionExecutor {
 public:
  explicit GnomeActionExecutor(GDBusConnectionRef connection);
  ~GnomeActionExecutor() override;

  void ExecuteAction(const protocol::ActionRequest& request) override;

 private:
  GDBusConnectionRef connection_;
};

}  // namespace remoting

#endif  // REMOTING_HOST_LINUX_GNOME_ACTION_EXECUTOR_H_
