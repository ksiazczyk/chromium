// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PartitionedLockId logging implementation
// summary: Implements stream output for PartitionedLockId, logging its partition and hex-encoded key for debugging.
// ---

#include "chrome/browser/web_applications/locks/partitioned_lock_id.h"

#include <iomanip>
#include <ostream>

namespace web_app {

std::ostream& operator<<(std::ostream& out, const PartitionedLockId& lock_id) {
  out << "<PartitionedLockId>{id: 0x";
  out << std::setfill('0');
  for (const char c : lock_id.key) {
    out << std::hex << std::setw(2) << static_cast<int>(c);
  }
  out << ", partition: " << lock_id.partition;
  out << "}";
  return out;
}

}  // namespace web_app
