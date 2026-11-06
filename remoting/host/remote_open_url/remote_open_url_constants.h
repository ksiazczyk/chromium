// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Remote open URL constants header
// summary: Declares the remote open URL constants, such as the data channel name and Windows URL forwarder ProgIDs.
// ---

#ifndef REMOTING_HOST_REMOTE_OPEN_URL_REMOTE_OPEN_URL_CONSTANTS_H_
#define REMOTING_HOST_REMOTE_OPEN_URL_REMOTE_OPEN_URL_CONSTANTS_H_

#include "build/build_config.h"

namespace remoting {

extern const char kRemoteOpenUrlDataChannelName[];

#if BUILDFLAG(IS_WIN)

// The ProgID of the URL forwarder.
extern const wchar_t kUrlForwarderProgId[];

// The ProgID for undecided default browser, which launches OpenWith.exe.
extern const wchar_t kUndecidedProgId[];

#endif  // BUILDFLAG(IS_WIN)

}  // namespace remoting

#endif  // REMOTING_HOST_REMOTE_OPEN_URL_REMOTE_OPEN_URL_CONSTANTS_H_
