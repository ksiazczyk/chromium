// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Download bubble display info implementation
// summary: Provides the shared empty DownloadBubbleDisplayInfo singleton returned by callers that have no display information to report.
// ---

#include "chrome/browser/download/bubble/download_bubble_display_info.h"

// static
const DownloadBubbleDisplayInfo& DownloadBubbleDisplayInfo::EmptyInfo() {
  static DownloadBubbleDisplayInfo empty_info;
  return empty_info;
}
