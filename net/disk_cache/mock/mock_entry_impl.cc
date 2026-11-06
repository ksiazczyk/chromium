// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock disk cache entry implementation
// summary: Implements the constructor and destructor of EntryMock, a Google Mock stub of the disk cache Entry interface used in tests.
// ---

#include "net/disk_cache/mock/mock_entry_impl.h"

namespace disk_cache {

EntryMock::EntryMock() = default;
EntryMock::~EntryMock() = default;

}  // namespace disk_cache
