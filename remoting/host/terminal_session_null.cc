// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Stub terminal session for unsupported platforms
// summary: Stub TerminalSession implementation that reports terminal sessions as unsupported and returns no persistent terminal IDs.
// ---

#include "remoting/host/terminal_session.h"

namespace remoting {

// static
bool TerminalSession::IsSupported() {
  return false;
}

// static
std::unique_ptr<TerminalSession> TerminalSession::Create(
    TerminalSessionManager::OutputCallback output_cb,
    TerminalSessionManager::ExitCallback exit_cb,
    TerminalSessionManager::ProcessInfoCallback process_info_cb,
    int32_t id) {
  return nullptr;
}

// static
std::vector<int32_t> TerminalSession::GetPersistentTerminalIds() {
  return {};
}

}  // namespace remoting
