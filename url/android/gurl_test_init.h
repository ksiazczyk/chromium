// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Header for Robolectric URL test scheme registration
// summary: Declares RegisterSchemesForRobolectric, which registers the schemes needed for URL parsing in Robolectric tests.
// ---

#ifndef URL_ANDROID_GURL_TEST_INIT_H_
#define URL_ANDROID_GURL_TEST_INIT_H_

namespace url {
void RegisterSchemesForRobolectric();
}
#endif  // URL_ANDROID_GURL_TEST_INIT_H_
