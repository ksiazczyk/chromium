// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Download bubble info change observer implementation
// summary: Implements the constructor and destructor of the simple change observer used by download bubble info classes.
// ---

#include "chrome/browser/ui/download/download_bubble_info.h"

DownloadBubbleInfoChangeObserver::DownloadBubbleInfoChangeObserver() = default;

DownloadBubbleInfoChangeObserver::~DownloadBubbleInfoChangeObserver() {
  CHECK(!IsInObserverList());
}
