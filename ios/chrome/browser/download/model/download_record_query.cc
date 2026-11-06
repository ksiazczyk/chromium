// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Download record query implementation
// summary: Implements the default constructor, copy operations and destructor of the DownloadRecordQuery struct.
// ---

#include "ios/chrome/browser/download/model/download_record_query.h"

DownloadRecordQuery::DownloadRecordQuery() = default;
DownloadRecordQuery::DownloadRecordQuery(const DownloadRecordQuery& other) =
    default;
DownloadRecordQuery& DownloadRecordQuery::operator=(
    const DownloadRecordQuery& other) = default;
DownloadRecordQuery::~DownloadRecordQuery() = default;
