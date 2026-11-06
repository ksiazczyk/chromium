// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header declaring the remoting corp API key stub
// summary: Declares the GetRemotingCorpApiKey stub used to supply a placeholder corp API key in public builds.
// ---

#ifndef REMOTING_BASE_API_KEY_STUBS_H_
#define REMOTING_BASE_API_KEY_STUBS_H_

#include <string>

namespace remoting::internal {

extern std::string GetRemotingCorpApiKey();

}  // namespace remoting::internal

#endif  // REMOTING_BASE_API_KEY_STUBS_H_
