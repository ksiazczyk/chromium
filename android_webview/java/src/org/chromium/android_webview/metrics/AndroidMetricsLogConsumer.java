// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AndroidMetricsLogConsumer interface
// summary: Interface used by AndroidMetricsLogUploader to transport serialized metrics logs to the underlying platform, returning an HTTP status code.
// ---

package org.chromium.android_webview.metrics;

import org.chromium.build.annotations.NullMarked;

/** Used by {@link AndroidMetricsLogUploader} to transport logs to the underlying platform. */
@NullMarked
public interface AndroidMetricsLogConsumer {
    /**
     * Uploads the log to the underlying platform.
     *
     * @return an HTTP status code to indicate the success.
     */
    int log(byte[] data);
}
