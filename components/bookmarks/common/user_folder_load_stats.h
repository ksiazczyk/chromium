// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: UserFolderLoadStats struct for folder counts
// summary: Declares a struct recording counts of user-generated bookmark folders and bookmark bar items at profile load time.
// ---

#ifndef COMPONENTS_BOOKMARKS_COMMON_USER_FOLDER_LOAD_STATS_H_
#define COMPONENTS_BOOKMARKS_COMMON_USER_FOLDER_LOAD_STATS_H_

namespace bookmarks {

// Stats regarding user-generated bookmark folders recorded at profile load
// time.
struct UserFolderLoadStats {
  int total_folders = 0;
  int total_top_level_folders = 0;
  int bookmark_bar_top_level_items = 0;
};

}  // namespace bookmarks

#endif  // COMPONENTS_BOOKMARKS_COMMON_USER_FOLDER_LOAD_STATS_H_
