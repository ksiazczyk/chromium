// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Permission message provider implementation
// summary: Implements the global PermissionMessageProvider accessor and the default management UI permission ID lookup for extensions.
// ---

#include "extensions/common/permissions/permission_message_provider.h"

#include "base/metrics/field_trial.h"
#include "base/strings/string_split.h"
#include "extensions/common/extensions_client.h"

namespace extensions {

// static
const PermissionMessageProvider* PermissionMessageProvider::Get() {
  return &(ExtensionsClient::Get()->GetPermissionMessageProvider());
}

PermissionIDSet PermissionMessageProvider::GetManagementUIPermissionIDs(
    const PermissionSet& permissions,
    Manifest::Type extension_type) const {
  return PermissionIDSet();
}
}  // namespace extensions
