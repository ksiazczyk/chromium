// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Offline page archiver parameter constructor
// summary: Implements the CreateArchiveParams constructor that stores the offline page namespace associated with an archive to be created.
// ---

#include "components/offline_pages/core/offline_page_archiver.h"

namespace offline_pages {

OfflinePageArchiver::CreateArchiveParams::CreateArchiveParams(
    const std::string& name_space)
    : name_space(name_space) {}

}  // namespace offline_pages
