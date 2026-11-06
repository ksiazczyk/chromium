// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: 'MinidumpUploaderTestConstants: shared test constants'
// summary: Holds shared constants for minidump uploader tests, including the multipart boundary and the expected upload crash ID.
// ---

package org.chromium.components.minidump_uploader;

import androidx.annotation.VisibleForTesting;

/** Constants for minidump uploader tests. */
@VisibleForTesting
public class MinidumpUploaderTestConstants {
    public static final String BOUNDARY = "TESTBOUNDARY";
    public static final String UPLOAD_CRASH_ID = "IMACRASHID";
}
