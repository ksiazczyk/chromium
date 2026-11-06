// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: URL forwarder configurator base implementation
// summary: Implements the UrlForwarderConfigurator base class and returns null on platforms other than Linux and Windows.
// ---

#include "remoting/host/remote_open_url/url_forwarder_configurator.h"

#include "base/notimplemented.h"
#include "build/build_config.h"

namespace remoting {

UrlForwarderConfigurator::UrlForwarderConfigurator() = default;

UrlForwarderConfigurator::~UrlForwarderConfigurator() = default;

#if !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_WIN)

// static
std::unique_ptr<UrlForwarderConfigurator> UrlForwarderConfigurator::Create() {
  // Unsupported platforms. Use NOTIMPLEMENTED() instead of NOTREACHED() since
  // some unit tests still attempt to create the configurator.
  NOTIMPLEMENTED();
  return nullptr;
}

#endif  // !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_WIN)

}  // namespace remoting
