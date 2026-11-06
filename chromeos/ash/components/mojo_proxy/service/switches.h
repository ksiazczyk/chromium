// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mojo proxy command-line switch declarations
// summary: Declares the mojo_proxy command-line switch name constants implemented in switches.cc for use within the service.
// ---

#ifndef CHROMEOS_ASH_COMPONENTS_MOJO_PROXY_SERVICE_SWITCHES_H_
#define CHROMEOS_ASH_COMPONENTS_MOJO_PROXY_SERVICE_SWITCHES_H_

namespace switches {

extern const char kLegacyClientFd[];
extern const char kHostIpczTransportFd[];
extern const char kInheritIpczBroker[];
extern const char kAttachmentName[];
extern const char kNumAttachments[];

}  // namespace switches

#endif  // CHROMEOS_ASH_COMPONENTS_MOJO_PROXY_SERVICE_SWITCHES_H_
