// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Updater IPC server name declarations
// summary: Declares functions returning the Mojo named channel server names for the internal and public update services, scoped by user or system install.
// ---

#ifndef CHROME_UPDATER_IPC_IPC_NAMES_H_
#define CHROME_UPDATER_IPC_IPC_NAMES_H_

#include "chrome/updater/updater_scope.h"
#include "mojo/public/cpp/platform/named_platform_channel.h"

namespace updater {

mojo::NamedPlatformChannel::ServerName GetUpdateServiceInternalServerName(
    UpdaterScope scope);

mojo::NamedPlatformChannel::ServerName GetUpdateServiceServerName(
    UpdaterScope scope);

}  // namespace updater

#endif  // CHROME_UPDATER_IPC_IPC_NAMES_H_
