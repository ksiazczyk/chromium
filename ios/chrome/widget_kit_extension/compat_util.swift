// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WidgetConfiguration compatibility helper
// summary: Adds a crDisfavoredLocations helper to WidgetConfiguration to disfavor iPhone widget placements on Mac.
// ---

import SwiftUI
import WidgetKit

extension WidgetConfiguration {
  func crDisfavoredLocations() -> some WidgetConfiguration {
    return disfavoredLocations(
      [.iPhoneWidgetsOnMac], for: [.systemSmall, .systemMedium, .accessoryCircular])
  }
}
