// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: QuotaLimitType enum
// summary: Defines the QuotaLimitType enum with unknown, limited and unlimited quota limit values.
// ---

#ifndef STORAGE_BROWSER_FILE_SYSTEM_QUOTA_QUOTA_LIMIT_TYPE_H_
#define STORAGE_BROWSER_FILE_SYSTEM_QUOTA_QUOTA_LIMIT_TYPE_H_

namespace storage {

enum class QuotaLimitType {
  kUnknown,
  kLimited,
  kUnlimited,
};

}  // namespace storage

#endif  // STORAGE_BROWSER_FILE_SYSTEM_QUOTA_QUOTA_LIMIT_TYPE_H_
