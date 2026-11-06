// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: App Store review adapter around StoreKit requestReview
// summary: Swift adapter exposing Apple's iOS 15 StoreKit AppStore.requestReview API so Objective-C++ code can request an App Store rating in a window scene.
// ---

import StoreKit
import UIKit

// An adapter class around the StoreKit::AppStore enum. Apple's AppStore enumeration was introduced in iOS15 and is Swift-only.
public final class AppStoreReviewAdapter: NSObject {
  // Requests an App Store rating/review from the user using `scene`.
  @MainActor
  @objc(requestReviewInScene:)
  public static func requestReview(in scene: UIWindowScene) {
    AppStore.requestReview(in: scene)
  }
}
