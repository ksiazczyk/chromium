// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Variations seed loader declarations
// summary: Declares TakeSeed to hand off the parsed variations seed and CacheSeedFreshness to report seed freshness back to Java.
// ---

#ifndef ANDROID_WEBVIEW_BROWSER_VARIATIONS_VARIATIONS_SEED_LOADER_H_
#define ANDROID_WEBVIEW_BROWSER_VARIATIONS_VARIATIONS_SEED_LOADER_H_

#include <memory>

namespace android_webview {

class AwVariationsSeed;

std::unique_ptr<AwVariationsSeed> TakeSeed();

void CacheSeedFreshness(long freshness);

}  // namespace android_webview

#endif  // ANDROID_WEBVIEW_BROWSER_VARIATIONS_VARIATIONS_SEED_LOADER_H_
