// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: VideoCaptureDependencies implementation
// summary: Creates JPEG decode and encode accelerators via the GPU process host on the UI thread for ChromeOS video capture.
// ---

#include "content/browser/gpu/chromeos/video_capture_dependencies.h"

#include "base/functional/bind.h"
#include "content/browser/gpu/gpu_process_host.h"
#include "content/public/browser/browser_task_traits.h"
#include "content/public/browser/browser_thread.h"

namespace content {

// static
void VideoCaptureDependencies::CreateJpegDecodeAccelerator(
    mojo::PendingReceiver<chromeos_camera::mojom::MjpegDecodeAccelerator>
        accelerator) {
  if (!GetUIThreadTaskRunner({})->BelongsToCurrentThread()) {
    GetUIThreadTaskRunner({})->PostTask(
        FROM_HERE,
        base::BindOnce(&VideoCaptureDependencies::CreateJpegDecodeAccelerator,
                       std::move(accelerator)));
    return;
  }

  auto* host =
      GpuProcessHost::Get(GPU_PROCESS_KIND_SANDBOXED, true /*force_create*/);
  if (host) {
    host->gpu_service()->CreateJpegDecodeAccelerator(std::move(accelerator));
  } else {
    LOG(ERROR) << "No GpuProcessHost";
  }
}

// static
void VideoCaptureDependencies::CreateJpegEncodeAccelerator(
    mojo::PendingReceiver<chromeos_camera::mojom::JpegEncodeAccelerator>
        accelerator) {
  if (!GetUIThreadTaskRunner({})->BelongsToCurrentThread()) {
    GetUIThreadTaskRunner({})->PostTask(
        FROM_HERE,
        base::BindOnce(&VideoCaptureDependencies::CreateJpegEncodeAccelerator,
                       std::move(accelerator)));
    return;
  }

  auto* host =
      GpuProcessHost::Get(GPU_PROCESS_KIND_SANDBOXED, true /*force_create*/);
  if (host) {
    host->gpu_service()->CreateJpegEncodeAccelerator(std::move(accelerator));
  } else {
    LOG(ERROR) << "No GpuProcessHost";
  }
}

}  // namespace content
