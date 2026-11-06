// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Printing user agent string storage
// summary: Implements SetAgent and GetAgent, storing a user-agent string that the printing system may embed in output metadata.
// ---

#include "printing/metafile_agent.h"

#include <string>

#include "base/no_destructor.h"

namespace printing {

namespace {

std::string& GetAgentImpl() {
  static base::NoDestructor<std::string> instance;
  return *instance;
}

}  // namespace

void SetAgent(const std::string& user_agent) {
  GetAgentImpl() = user_agent;
}

const std::string& GetAgent() {
  return GetAgentImpl();
}

}  // namespace printing
