// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebSocket deflate predictor implementation
// summary: Implements a deflate predictor that always chooses to deflate WebSocket messages and records no frame data.
// ---

#include "net/websockets/websocket_deflate_predictor_impl.h"

namespace net {

typedef WebSocketDeflatePredictor::Result Result;

Result WebSocketDeflatePredictorImpl::Predict(
    const std::vector<std::unique_ptr<WebSocketFrame>>& frames,
    size_t frame_index) {
  return DEFLATE;
}

void WebSocketDeflatePredictorImpl::RecordInputDataFrame(
    const WebSocketFrame* frame) {}

void WebSocketDeflatePredictorImpl::RecordWrittenDataFrame(
    const WebSocketFrame* frame) {}

}  // namespace net
