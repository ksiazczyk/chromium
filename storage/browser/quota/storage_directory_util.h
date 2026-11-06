// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Storage bucket path utility declarations
// summary: Declares functions that construct disk paths for bucket data and client-specific data under a given profile path.
// ---

#ifndef STORAGE_BROWSER_QUOTA_STORAGE_DIRECTORY_UTIL_H_
#define STORAGE_BROWSER_QUOTA_STORAGE_DIRECTORY_UTIL_H_

#include "base/files/file_path.h"
#include "components/services/storage/public/cpp/buckets/bucket_locator.h"
#include "storage/browser/quota/quota_client_type.h"

namespace storage {

// Constructs path where `bucket` data is persisted to disk for partitioned
// storage given a `profile_path`.
COMPONENT_EXPORT(STORAGE_BROWSER)
base::FilePath CreateBucketPath(const base::FilePath& profile_path,
                                const BucketLocator& bucket);

// Constructs path where `client_type` data for a `bucket` is persisted to disk
// for partitioned storage given a `profile_path`.
COMPONENT_EXPORT(STORAGE_BROWSER)
base::FilePath CreateClientBucketPath(const base::FilePath& profile_path,
                                      const BucketLocator& bucket,
                                      QuotaClientType client_type);

}  // namespace storage

#endif  // STORAGE_BROWSER_QUOTA_STORAGE_DIRECTORY_UTIL_H_
