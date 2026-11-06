// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Me2Me host service main declaration
// summary: Declares the Me2MeHostServiceMain entry function exported for the macOS host service binary.
// ---

#ifndef REMOTING_HOST_MAC_HOST_SERVICE_MAIN_H_
#define REMOTING_HOST_MAC_HOST_SERVICE_MAIN_H_

#include "remoting/base/remoting_export.h"

namespace remoting {

REMOTING_EXPORT int Me2MeHostServiceMain(int argc, char** argv);

}  // namespace remoting

#endif  // REMOTING_HOST_MAC_HOST_SERVICE_MAIN_H_
