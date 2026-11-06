// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test URL rewriters stub
// summary: Test provider implementation of AddURLRewriters that intentionally registers no URL rewriters for iOS Chrome tests.
// ---

#include "ios/public/provider/chrome/browser/url_rewriters/url_rewriters_api.h"

namespace ios {
namespace provider {

void AddURLRewriters(web::BrowserURLRewriter* rewriter) {
  // No URL rewriters to register for tests.
}

}  // namespace provider
}  // namespace ios
