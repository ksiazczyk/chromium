// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Agent process broker entry point
// summary: Provides the main() function that starts the agent process broker main routine for the broker executable.
// ---

#include "remoting/host/mac/agent_process_broker_main.h"

int main(int argc, char** argv) {
  return remoting::AgentProcessBrokerMain(argc, argv);
}
