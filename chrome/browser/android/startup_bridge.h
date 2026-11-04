// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header for the Android startup bridge
// summary: Declares android_startup::LoadFullBrowser, the native entry point used to load the full browser during Android startup.
// ---

#ifndef CHROME_BROWSER_ANDROID_STARTUP_BRIDGE_H_
#define CHROME_BROWSER_ANDROID_STARTUP_BRIDGE_H_

namespace android_startup {
void LoadFullBrowser();
}

#endif  // CHROME_BROWSER_ANDROID_STARTUP_BRIDGE_H_
