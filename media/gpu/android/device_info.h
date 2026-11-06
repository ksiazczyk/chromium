// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DeviceInfo header
// summary: Declares DeviceInfo, a virtual, cached interface for Android platform and decoder capability information used by media code.
// ---

#ifndef MEDIA_GPU_ANDROID_DEVICE_INFO_H_
#define MEDIA_GPU_ANDROID_DEVICE_INFO_H_

#include <vector>

#include "media/base/video_codecs.h"
#include "media/gpu/media_gpu_export.h"

namespace media {

// Info about the current platform and device with caching of the results that
// don't change. Virtual for testing.
struct MEDIA_GPU_EXPORT DeviceInfo {
  static DeviceInfo* GetInstance();

  virtual int SdkVersion();
  virtual int SdkVersionFull();
  virtual bool IsVp8DecoderAvailable();
  virtual bool IsDecoderKnownUnaccelerated(VideoCodec codec);
  virtual void AddSupportedCodecProfileLevels(
      std::vector<CodecProfileLevel>* result);
};

}  // namespace media

#endif  // MEDIA_GPU_ANDROID_DEVICE_INFO_H_
