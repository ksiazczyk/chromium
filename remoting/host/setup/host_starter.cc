// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HostStarter implementation
// summary: Implements the default members of the HostStarter interface, including the Params struct's move operations and destructor.
// ---

#include "remoting/host/setup/host_starter.h"

namespace remoting {

HostStarter::~HostStarter() = default;

HostStarter::Params::Params() = default;
HostStarter::Params::Params(HostStarter::Params&&) = default;
HostStarter::Params& HostStarter::Params::operator=(HostStarter::Params&&) =
    default;
HostStarter::Params::~Params() = default;

}  // namespace remoting
