// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Per-item state for OfflineItemModel
// summary: Defines the OfflineItemModelData struct that stores UI notification and actioned-on flags for each offline item.
// ---

#ifndef CHROME_BROWSER_DOWNLOAD_OFFLINE_ITEM_MODEL_DATA_H_
#define CHROME_BROWSER_DOWNLOAD_OFFLINE_ITEM_MODEL_DATA_H_

// Per OfflineItem data used by OfflineItemModel. The model doesn't keep any
// state, all the state will be stored in this class.
struct OfflineItemModelData {
  // Whether the UI has been notified about this offline item.
  bool was_ui_notified_ = false;

  // Was the UI actioned on.
  bool actioned_on_ = false;
};

#endif  // CHROME_BROWSER_DOWNLOAD_OFFLINE_ITEM_MODEL_DATA_H_
