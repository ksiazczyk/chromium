// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GenericDmaBufVideoFrameMapper declaration
// summary: Declares GenericDmaBufVideoFrameMapper, a VideoFrameMapper that maps DMABUF-backed video frames into memory for a given pixel format.
// ---

#ifndef MEDIA_GPU_CHROMEOS_GENERIC_DMABUF_VIDEO_FRAME_MAPPER_H_
#define MEDIA_GPU_CHROMEOS_GENERIC_DMABUF_VIDEO_FRAME_MAPPER_H_

#include "media/gpu/media_gpu_export.h"
#include "media/gpu/video_frame_mapper.h"

namespace media {

// The GenericDmaBufVideoFrameMapper implements functionality to map DMABUF-
// backed video frames into memory.
class MEDIA_GPU_EXPORT GenericDmaBufVideoFrameMapper : public VideoFrameMapper {
 public:
  static std::unique_ptr<GenericDmaBufVideoFrameMapper> Create(
      VideoPixelFormat format);

  GenericDmaBufVideoFrameMapper(const GenericDmaBufVideoFrameMapper&) = delete;
  GenericDmaBufVideoFrameMapper& operator=(
      const GenericDmaBufVideoFrameMapper&) = delete;

  ~GenericDmaBufVideoFrameMapper() override = default;
  // VideoFrameMapper implementation.
  scoped_refptr<VideoFrame> MapFrame(
      scoped_refptr<const FrameResource> video_frame,
      int permissions) override;

 private:
  explicit GenericDmaBufVideoFrameMapper(VideoPixelFormat format);
};

}  // namespace media
#endif  // MEDIA_GPU_CHROMEOS_GENERIC_DMABUF_VIDEO_FRAME_MAPPER_H_
