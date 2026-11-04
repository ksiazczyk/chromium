// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AwContentGpuClient implementation
// summary: Implements the WebView content GPU client, returning the sync point manager, shared image manager, scheduler, viz compositor runner, and GrContext options provider via stored callbacks.
// relations:
//   - depends_on /android_webview/gpu/aw_content_gpu_client.h
// ---

#include "android_webview/gpu/aw_content_gpu_client.h"

#include <utility>

namespace android_webview {

AwContentGpuClient::AwContentGpuClient(
    GetSyncPointManagerCallback sync_point_manager_callback,
    GetSharedImageManagerCallback shared_image_manager_callback,
    GetSchedulerCallback scheduler_callback,
    GetVizCompositorThreadRunnerCallback viz_compositor_thread_runner_callback,
    const AwGrContextOptionsProvider* gr_context_options_provider)
    : sync_point_manager_callback_(std::move(sync_point_manager_callback)),
      shared_image_manager_callback_(std::move(shared_image_manager_callback)),
      scheduler_callback_(std::move(scheduler_callback)),
      viz_compositor_thread_runner_callback_(
          std::move(viz_compositor_thread_runner_callback)),
      gr_context_options_provider_(gr_context_options_provider) {}

AwContentGpuClient::~AwContentGpuClient() {}

gpu::SyncPointManager* AwContentGpuClient::GetSyncPointManager() {
  return sync_point_manager_callback_.Run();
}

gpu::SharedImageManager* AwContentGpuClient::GetSharedImageManager() {
  return shared_image_manager_callback_.Run();
}

gpu::Scheduler* AwContentGpuClient::GetScheduler() {
  return scheduler_callback_.Run();
}

viz::VizCompositorThreadRunner*
AwContentGpuClient::GetVizCompositorThreadRunner() {
  return viz_compositor_thread_runner_callback_.Run();
}

const gpu::SharedContextState::GrContextOptionsProvider*
AwContentGpuClient::GetGrContextOptionsProvider() {
  return gr_context_options_provider_;
}

}  // namespace android_webview
