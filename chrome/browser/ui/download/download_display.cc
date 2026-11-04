// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Download display implementation
// summary: Implements equality comparison for DownloadDisplay::ProgressInfo fields excluding the percentage.
// ---

#include "chrome/browser/ui/download/download_display.h"

#include <tuple>

bool DownloadDisplay::ProgressInfo::FieldsEqualExceptPercentage(
    const ProgressInfo& other) const {
  return std::tie(download_count, progress_certain) ==
         std::tie(other.download_count, other.progress_certain);
}
