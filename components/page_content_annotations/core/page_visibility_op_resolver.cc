// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Page visibility op resolver implementation
// summary: Registers custom TFLite ops used by the page visibility model, such as sequence string projection and QRNN pooling.
// ---

#include "components/page_content_annotations/core/page_visibility_op_resolver.h"

#include "third_party/tensorflow_models/src/research/seq_flow_lite/tflite_ops/denylist_skipgram.h"
#include "third_party/tensorflow_models/src/research/seq_flow_lite/tflite_ops/sequence_string_projection.h"
#include "third_party/tensorflow_models/src/research/seq_flow_lite/tflite_ops/tflite_qrnn_pooling.h"

namespace page_content_annotations {

PageVisibilityOpResolver::PageVisibilityOpResolver() {
  AddCustom("SequenceStringProjection",
            seq_flow_lite::ops::custom::Register_SEQUENCE_STRING_PROJECTION());
  AddCustom("PoolingOp", seq_flow_lite::ops::custom::Register_QRNN_POOLING());
  AddCustom("SkipgramDenylist",
            seq_flow_lite::ops::custom::Register_SKIPGRAM_DENYLIST());
}
PageVisibilityOpResolver::~PageVisibilityOpResolver() = default;

}  // namespace page_content_annotations
