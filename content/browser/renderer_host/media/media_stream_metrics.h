// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Media stream metrics declarations
// summary: Declares functions that record media stream request response metrics and UKM events for video capture results.
// ---

#ifndef CONTENT_BROWSER_RENDERER_HOST_MEDIA_MEDIA_STREAM_METRICS_H_
#define CONTENT_BROWSER_RENDERER_HOST_MEDIA_MEDIA_STREAM_METRICS_H_

#include "services/metrics/public/cpp/ukm_source_id.h"
#include "third_party/blink/public/mojom/mediastream/media_stream.mojom.h"

namespace content::media_stream_metrics {

void RecordMediaStreamRequestResponseMetric(
    blink::mojom::MediaStreamType video_type,
    blink::MediaStreamRequestType request_type,
    blink::mojom::MediaStreamRequestResult result);

void RecordMediaStreamRequestResponseUKM(
    ukm::SourceId ukm_source_id,
    blink::mojom::MediaStreamType video_type,
    blink::MediaStreamRequestType request_type,
    blink::mojom::MediaStreamRequestResult result);

}  // namespace content::media_stream_metrics

#endif  // CONTENT_BROWSER_RENDERER_HOST_MEDIA_MEDIA_STREAM_METRICS_H_
