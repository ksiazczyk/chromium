// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: LaunchLocation enum of item launch origins
// summary: Defines the LaunchLocation enum indicating where an offline item is launched from, such as download home, notification, progress bar, or download bubble.
// ---

#ifndef COMPONENTS_OFFLINE_ITEMS_COLLECTION_CORE_LAUNCH_LOCATION_H_
#define COMPONENTS_OFFLINE_ITEMS_COLLECTION_CORE_LAUNCH_LOCATION_H_

#include <iosfwd>

namespace offline_items_collection {

// Indicates where the item is being launched.
// A Java counterpart will be generated for this enum.
// GENERATED_JAVA_ENUM_PACKAGE: org.chromium.components.offline_items_collection
enum class LaunchLocation {
  // From Download home.
  DOWNLOAD_HOME,
  // Due to clicking a download complete notification.
  NOTIFICATION,
  // Due to clicking "Open" link in the download progress bar.
  PROGRESS_BAR,
  // Due to clicking a suggested item in NTP.
  SUGGESTION,
  // Due to clicking a suggestion on the net error page.
  NET_ERROR_SUGGESTION,
  // From Download interstitial open button.
  DOWNLOAD_INTERSTITIAL,
  // From Download bubble UI.
  DOWNLOAD_BUBBLE,
};

}  // namespace offline_items_collection

#endif  // COMPONENTS_OFFLINE_ITEMS_COLLECTION_CORE_LAUNCH_LOCATION_H_
