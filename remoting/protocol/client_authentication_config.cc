// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Client authentication config implementation
// summary: Implements the default constructor, copy constructor and destructor of the ClientAuthenticationConfig struct.
// ---

#include "remoting/protocol/client_authentication_config.h"

namespace remoting::protocol {

ClientAuthenticationConfig::ClientAuthenticationConfig() = default;
ClientAuthenticationConfig::ClientAuthenticationConfig(
    const ClientAuthenticationConfig& other) = default;
ClientAuthenticationConfig::~ClientAuthenticationConfig() = default;

}  // namespace remoting::protocol
