// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SMB client constant definitions
// summary: Defines the SMB scheme strings and the smbfs verbose logging switch constant.
// ---

#include "chrome/browser/ash/smb_client/smb_constants.h"

namespace ash::smb_client {

const char kSmbScheme[] = "smb";
const char kSmbSchemePrefix[] = "smb://";
const char kSmbfsEnableVerboseLogging[] = "smbfs.enable_verbose_logging";

}  // namespace ash::smb_client
