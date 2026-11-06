// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FileSystemRequestInfo implementation
// summary: Implements the FileSystemRequestInfo constructor that copies the request URL, storage domain, content id, and storage key into the struct.
// ---

#include "storage/browser/file_system/file_system_request_info.h"

#include "third_party/blink/public/common/storage_key/storage_key.h"
#include "url/gurl.h"

namespace storage {

FileSystemRequestInfo::FileSystemRequestInfo(
    const GURL& url,
    const std::string& storage_domain,
    int content_id,
    const blink::StorageKey& storage_key)
    : url(url),
      storage_domain(storage_domain),
      content_id(content_id),
      storage_key(storage_key) {}

}  // namespace storage
