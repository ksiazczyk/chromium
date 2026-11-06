// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FileSystem feature flag definitions
// summary: Defines the kIncognitoFileSystemContextForTesting base feature, disabled by default, used to run web tests in incognito mode for FileSystemAccessAccessHandles parity.
// ---

#include "storage/browser/file_system/file_system_features.h"

namespace storage::features {

// Creates FileSystemContexts in incognito mode. This is used to run web tests
// in incognito mode to ensure feature parity for FileSystemAccessAccessHandles.
BASE_FEATURE(kIncognitoFileSystemContextForTesting,
             base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace storage::features
