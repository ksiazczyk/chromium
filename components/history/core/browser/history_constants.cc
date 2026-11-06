// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: History constants definitions
// summary: Defines history database filenames, the maximum title change count, and the title setting window used by the history component.
// ---

#include "components/history/core/browser/history_constants.h"

#include "base/files/file_path.h"

namespace history {

// filenames
const base::FilePath::CharType kFaviconsFilename[] =
    FILE_PATH_LITERAL("Favicons");
const base::FilePath::CharType kHistoryFilename[] =
    FILE_PATH_LITERAL("History");
const base::FilePath::CharType kTopSitesFilename[] =
    FILE_PATH_LITERAL("Top Sites");

const int kMaxTitleChanges = 10;

base::TimeDelta GetTitleSettingWindow() {
  const auto value = base::Seconds(5);
  return value;
}

}  // namespace history
