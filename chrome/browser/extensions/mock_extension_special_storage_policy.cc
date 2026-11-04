// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock extension special storage policy implementation
// summary: Implements the mock extension special storage policy, reporting protected origins from an internal set.
// ---

#include "chrome/browser/extensions/mock_extension_special_storage_policy.h"

MockExtensionSpecialStoragePolicy::MockExtensionSpecialStoragePolicy()
    : ExtensionSpecialStoragePolicy(nullptr) {}

bool MockExtensionSpecialStoragePolicy::IsStorageProtected(const GURL& origin) {
  return protected_.find(origin) != protected_.end();
}

bool MockExtensionSpecialStoragePolicy::IsStorageUnlimited(const GURL& origin) {
  return false;
}

bool MockExtensionSpecialStoragePolicy::IsStorageSessionOnly(
    const GURL& origin) {
  return false;
}

bool MockExtensionSpecialStoragePolicy::HasSessionOnlyOrigins() {
  return false;
}

MockExtensionSpecialStoragePolicy::~MockExtensionSpecialStoragePolicy() =
    default;
