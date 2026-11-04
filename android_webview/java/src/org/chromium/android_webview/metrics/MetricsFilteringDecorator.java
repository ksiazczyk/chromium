// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MetricsFilteringDecorator
// summary: Filters metrics logs against the histogram allowlist before forwarding them to the base log uploader when only critical metrics are allowed.
// relations:
//   - implements /android_webview/java/src/org/chromium/android_webview/metrics/AndroidMetricsLogConsumer.java
//   - depends_on /android_webview/java/src/org/chromium/android_webview/metrics/HistogramsAllowlist.java
// ---

package org.chromium.android_webview.metrics;

import com.google.protobuf.InvalidProtocolBufferException;

import org.chromium.base.Log;
import org.chromium.build.annotations.NullMarked;
import org.chromium.components.metrics.ChromeUserMetricsExtensionProtos.ChromeUserMetricsExtension;
import org.chromium.components.metrics.HistogramEventProtos.HistogramEventProto;
import org.chromium.components.metrics.SystemProfileProtos.SystemProfileProto.MetricsFilteringStatus;

import java.util.ArrayList;
import java.util.List;

/** Applies metrics filtering before forwarding to the base log uploader. */
@NullMarked
public class MetricsFilteringDecorator implements AndroidMetricsLogConsumer {
    private static final String TAG = "MetricsFiltering";
    private final AndroidMetricsLogConsumer mLogUploader;
    private final HistogramsAllowlist mHistogramsAllowlist;

    public MetricsFilteringDecorator(AndroidMetricsLogConsumer uploader) {
        mLogUploader = uploader;
        mHistogramsAllowlist = HistogramsAllowlist.load();
    }

    @Override
    public int log(byte[] data) {
        return mLogUploader.log(applyMetricsFilteringIfNeeded(data));
    }

    private boolean shouldApplyMetricsFiltering(ChromeUserMetricsExtension proto) {
        return proto.hasSystemProfile()
                && proto.getSystemProfile().hasMetricsFilteringStatus()
                && proto.getSystemProfile().getMetricsFilteringStatus()
                        == MetricsFilteringStatus.METRICS_ONLY_CRITICAL;
    }

    private byte[] applyMetricsFilteringIfNeeded(byte[] data) {
        try {
            ChromeUserMetricsExtension proto = ChromeUserMetricsExtension.parseFrom(data);
            if (shouldApplyMetricsFiltering(proto)) {
                List<HistogramEventProto> filteredHistograms = new ArrayList<>();
                for (HistogramEventProto event : proto.getHistogramEventList()) {
                    if (mHistogramsAllowlist.contains(event)) {
                        filteredHistograms.add(event);
                    }
                }
                ChromeUserMetricsExtension.Builder builder = proto.toBuilder();
                builder.clearUserActionEvent()
                        .clearHistogramEvent()
                        .addAllHistogramEvent(filteredHistograms);
                return builder.build().toByteArray();
            }
            return data;
        } catch (InvalidProtocolBufferException e) {
            Log.w(TAG, "Failed to parse ChromeUserMetricsExtension proto, uploading regardless", e);
            return data;
        }
    }
}
