// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SharedDictionaryUsageInfo struct declaration
// summary: Declares a struct pairing a shared dictionary isolation key with the total size in bytes of dictionaries in use.
// ---

#ifndef NET_EXTRAS_SHARED_DICTIONARY_SHARED_DICTIONARY_USAGE_INFO_H_
#define NET_EXTRAS_SHARED_DICTIONARY_SHARED_DICTIONARY_USAGE_INFO_H_

#include "base/component_export.h"
#include "net/shared_dictionary/shared_dictionary_isolation_key.h"

namespace net {

struct COMPONENT_EXPORT(NET_SHARED_DICTIONARY) SharedDictionaryUsageInfo {
  friend bool operator==(const SharedDictionaryUsageInfo&,
                         const SharedDictionaryUsageInfo&) = default;

  SharedDictionaryIsolationKey isolation_key;
  uint64_t total_size_bytes = 0;
};

}  // namespace net

#endif  // NET_EXTRAS_SHARED_DICTIONARY_SHARED_DICTIONARY_USAGE_INFO_H_
