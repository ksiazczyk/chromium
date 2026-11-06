// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Me2Me native messaging host main header
// summary: Declares the exported Me2MeNativeMessagingHostMain entry point function for the native messaging host.
// ---

#ifndef REMOTING_HOST_SETUP_ME2ME_NATIVE_MESSAGING_HOST_MAIN_H_
#define REMOTING_HOST_SETUP_ME2ME_NATIVE_MESSAGING_HOST_MAIN_H_

#include "remoting/base/remoting_export.h"

namespace remoting {

// The me2me native messaging host entry point exported from remoting_core.dll.
REMOTING_EXPORT int Me2MeNativeMessagingHostMain(int argc, char** argv);

}  // namespace remoting

#endif  // REMOTING_HOST_SETUP_ME2ME_NATIVE_MESSAGING_HOST_MAIN_H_
