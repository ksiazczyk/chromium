// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SameTaskWebApkActivity
// summary: WebappActivity variant with documentLaunchMode set to none, so the WebAPK activity opens in the same task.
// ---

package org.chromium.chrome.browser.webapps;

import org.chromium.build.annotations.NullMarked;

/** WebappActivity variant which has documentLaunchMode="none". */
@NullMarked
public class SameTaskWebApkActivity extends WebappActivity {}
