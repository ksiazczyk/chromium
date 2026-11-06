// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Agent process broker main declaration
// summary: Declares the exported AgentProcessBrokerMain function used as the entry point of the broker executable.
// ---

#include "remoting/base/remoting_export.h"

#ifndef REMOTING_HOST_MAC_AGENT_PROCESS_BROKER_MAIN_H_
#define REMOTING_HOST_MAC_AGENT_PROCESS_BROKER_MAIN_H_

namespace remoting {

REMOTING_EXPORT int AgentProcessBrokerMain(int argc, char** argv);

}  // namespace remoting

#endif  // REMOTING_HOST_MAC_AGENT_PROCESS_BROKER_MAIN_H_
