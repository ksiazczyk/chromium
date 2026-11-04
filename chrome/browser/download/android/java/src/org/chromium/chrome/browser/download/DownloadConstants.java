// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Download constants
// summary: Holds constants shared by download code, currently the invalid download ID sentinel value.
// ---

package org.chromium.chrome.browser.download;

import org.chromium.build.annotations.NullMarked;

/** Constants that are used in download. */
@NullMarked
public class DownloadConstants {
    static final long INVALID_DOWNLOAD_ID = -1L;
}
