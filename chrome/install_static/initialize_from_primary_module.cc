// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Initialization of install details from the primary module
// summary: Initializes the process-wide InstallDetails in secondary modules such as chrome.exe and chrome.dll from the payload exported by the primary module.
// ---

#include "chrome/install_static/initialize_from_primary_module.h"

#include "chrome/install_static/install_details.h"

// A function exported by the primary module, which is expected to be built with
// the "primary_module" source set.
extern "C" const install_static::InstallDetails::Payload __declspec(dllimport) *
    GetInstallDetailsPayload();

namespace install_static {

void InitializeFromPrimaryModule() {
  InstallDetails::InitializeFromPayload(GetInstallDetailsPayload());
}

}  // namespace install_static
