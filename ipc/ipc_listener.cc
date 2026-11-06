// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IPC listener debug name implementation
// summary: Implements Listener::ToDebugString, returning a debug name identifying the IPC listener class.
// ---

#include "ipc/ipc_listener.h"

namespace IPC {

std::string Listener::ToDebugString() {
  return "IPC::Listener";
}

}  // namespace IPC
