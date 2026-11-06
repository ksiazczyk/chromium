// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Dummy AiCoreModelDownloaderBackend used when AiCore is unavailable
// summary: Fallback implementation of the model downloader backend that reports the AiCore API as not available for status checks and downloads.
// ---

package org.chromium.on_device_model;

import org.chromium.build.annotations.NullMarked;

/** A dummy implementation of AiCoreModelDownloaderBackend. Used when AiCore is not available. */
@NullMarked
class AiCoreModelDownloaderBackendUpstreamImpl implements AiCoreModelDownloaderBackend {
    @Override
    public void checkStatus(DownloaderResponder responder) {
        responder.onStatusCheckResult(ModelStatus.API_NOT_AVAILABLE);
    }

    @Override
    public void startDownload(DownloaderResponder responder) {
        responder.onUnavailable(DownloadFailureReason.API_NOT_AVAILABLE);
    }

    @Override
    public void onNativeDestroyed() {}
}
