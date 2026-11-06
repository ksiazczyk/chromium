// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DownloadSliceInfo struct declaration
// summary: Declares the DownloadSliceInfo struct describing a slice of a download file with download id, offset, received bytes, and finished flag.
// ---

#ifndef COMPONENTS_HISTORY_CORE_BROWSER_DOWNLOAD_SLICE_INFO_H_
#define COMPONENTS_HISTORY_CORE_BROWSER_DOWNLOAD_SLICE_INFO_H_

#include <stdint.h>

#include "components/history/core/browser/download_types.h"

namespace history {

// Contains the information for each slice of data that is written to the
// download target file. A download file can have multiple slices and cach
// slice will have a different offset.
struct DownloadSliceInfo {
  DownloadSliceInfo();
  DownloadSliceInfo(DownloadId download_id,
                    int64_t offset,
                    int64_t received_bytes,
                    bool finished);
  DownloadSliceInfo(const DownloadSliceInfo& other);
  ~DownloadSliceInfo();

  bool operator==(const DownloadSliceInfo&) const;

  // The id of the download in the database.
  DownloadId download_id;

  // Start position of the download request.
  int64_t offset;

  // The number of bytes received (so far).
  int64_t received_bytes;

  // If the download stream is successfully finished for this slice.
  bool finished;
};

}  // namespace history

#endif  // COMPONENTS_HISTORY_CORE_BROWSER_DOWNLOAD_SLICE_INFO_H_
