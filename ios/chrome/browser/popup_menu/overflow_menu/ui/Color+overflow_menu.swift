// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Color extension for overflow menu separator
// summary: SwiftUI Color extension providing the overflow menu separator color with dark mode support.
// ---

import SwiftUI

extension Color {
  static var overflowMenuSeparator: Color {
    let uiColor = UIColor { traitCollection in
      let color =
        traitCollection.userInterfaceStyle == .dark
        ? UIColor(named: kGrey100Color) : UIColor(named: kGrey200Color)
      return color ?? .separator
    }
    return Color(uiColor: uiColor)
  }
}
