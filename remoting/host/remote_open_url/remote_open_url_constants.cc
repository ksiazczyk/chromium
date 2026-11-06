// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Remote open URL constants
// summary: Defines constants for the remote open URL feature, including the data channel name and Windows URL forwarder ProgIDs.
// ---

#include "remoting/host/remote_open_url/remote_open_url_constants.h"

#include "build/build_config.h"

namespace remoting {

const char kRemoteOpenUrlDataChannelName[] = "remote-open-url";

#if BUILDFLAG(IS_WIN)

#if defined(OFFICIAL_BUILD)
const wchar_t kUrlForwarderProgId[] = L"ChromeRemoteDesktopUrlForwarder";
#else
const wchar_t kUrlForwarderProgId[] = L"ChromotingUrlForwarder";
#endif

const wchar_t kUndecidedProgId[] = L"Undecided";

#endif  // BUILDFLAG(IS_WIN)

}  // namespace remoting
