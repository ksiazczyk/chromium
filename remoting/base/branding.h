// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chromoting branding constants and config directory declarations
// summary: Declares the Windows chromoting service and event name constants plus the GetConfigDir function returning the platform-specific config directory.
// ---

#ifndef REMOTING_BASE_BRANDING_H_
#define REMOTING_BASE_BRANDING_H_

#include "base/files/file_path.h"
#include "build/build_config.h"

namespace remoting {

#if BUILDFLAG(IS_WIN)
// Windows chromoting service name.
extern const wchar_t kWindowsServiceName[];

// Windows global event names used for coordinating host updates with running
// sessions.
extern const wchar_t kHostSessionActiveEventName[];
extern const wchar_t kHostUpdatePendingEventName[];
#endif

// Returns the a directory for storing chromoting config files. Depending on the
// platform, different users may get different config directories.
base::FilePath GetConfigDir();

}  // namespace remoting

#endif  // REMOTING_BASE_BRANDING_H_
