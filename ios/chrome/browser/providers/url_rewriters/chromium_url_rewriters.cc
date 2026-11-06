// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chromium URL rewriters provider implementation
// summary: Implements AddURLRewriters for Chromium builds as a no-op that registers no URL rewriters with the browser URL rewriter.
// ---

#include "ios/public/provider/chrome/browser/url_rewriters/url_rewriters_api.h"

namespace ios {
namespace provider {

void AddURLRewriters(web::BrowserURLRewriter* rewriter) {
  // No URL rewriters to register for Chromium.
}

}  // namespace provider
}  // namespace ios
