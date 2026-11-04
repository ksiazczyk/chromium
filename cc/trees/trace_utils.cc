// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Main frame pipeline trace utilities implementation
// summary: Implements EmitMainFramePipelineStep, which emits Perfetto trace events for steps of the main frame generation pipeline.
// ---

#include "cc/trees/trace_utils.h"

namespace cc {

perfetto::protos::pbzero::MainFramePipeline* EmitMainFramePipelineStep(
    perfetto::EventContext& ctx,
    BeginMainFrameTraceId commit_id,
    perfetto::protos::pbzero::MainFramePipeline::Step step) {
  perfetto::Flow::ProcessScoped(commit_id.value())(ctx);

  auto* event = ctx.event<perfetto::protos::pbzero::ChromeTrackEvent>();
  auto* pipeline = event->set_main_frame_pipeline();

  pipeline->set_step(step);
  pipeline->set_main_frame_id(commit_id.value());
  return pipeline;
}

}  // namespace cc
