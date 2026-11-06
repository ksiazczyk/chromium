// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: V4L2 VP9 helpers header
// summary: Declares AppendVP9SuperFrameIndex, which appends a superframe index to a VP9 k-SVC DecoderBuffer and adjusts show_frame for the top spatial layer.
// ---

#ifndef MEDIA_GPU_V4L2_V4L2_VP9_HELPERS_H_
#define MEDIA_GPU_V4L2_V4L2_VP9_HELPERS_H_

#include "media/base/decoder_buffer.h"

namespace media {

// DecoderBuffer contains superframe in VP9 k-SVC stream but doesn't have
// superframe_index. This constructs superframe_index from side_data of
// DecoderBuffer which stands for sizes of frames in a superframe.
// |buffer| is replaced with a new DecoderBuffer, where superframe index is
// appended to |buffer| data. Besides, show_frame in the new DecoderBuffer is
// overwritten so that show_frame is one only in the top spatial layer.
// See go/VP9-k-SVC-Decoing-VAAPI for detail.
bool AppendVP9SuperFrameIndex(scoped_refptr<DecoderBuffer>& buffer);
}  // namespace media

#endif  // MEDIA_GPU_V4L2_V4L2_VP9_HELPERS_H_
