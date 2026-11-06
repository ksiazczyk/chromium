// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Stub implementation for the remoting corp API key
// summary: Implements a stub GetRemotingCorpApiKey that returns a placeholder key for builds without Google-internal API keys.
// ---

#include "remoting/base/api_key_stubs.h"

namespace remoting::internal {

std::string GetRemotingCorpApiKey() {
  return "UNKNOWN API KEY";
}

}  // namespace remoting::internal
