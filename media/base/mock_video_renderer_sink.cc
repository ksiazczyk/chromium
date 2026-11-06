// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock video renderer sink implementation
// summary: Provides the constructor and destructor for MockVideoRendererSink, a gmock stand-in for VideoRendererSink used in media tests.
// ---

#include "media/base/mock_video_renderer_sink.h"

namespace media {

MockVideoRendererSink::MockVideoRendererSink() = default;

MockVideoRendererSink::~MockVideoRendererSink() = default;

}  // namespace media
