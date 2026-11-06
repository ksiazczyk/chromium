// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Host user setting key definitions
// summary: Defines Windows-specific user setting keys, such as the previous default web browser ProgId, stored in the registry.
// ---

#ifndef REMOTING_HOST_USER_SETTING_KEYS_H_
#define REMOTING_HOST_USER_SETTING_KEYS_H_

#include "build/build_config.h"
#include "remoting/base/user_settings.h"

namespace remoting {

#if BUILDFLAG(IS_WIN)

// Windows settings are stored in the registry where the key and value names use
// pascal case.

constexpr UserSettingKey kWinPreviousDefaultWebBrowserProgId =
    "PreviousDefaultBrowserProgId";

#endif  // BUILDFLAG(IS_WIN)

}  // namespace remoting

#endif  // REMOTING_HOST_USER_SETTING_KEYS_H_
