// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock mirroring activity implementation
// summary: Implements the MockMirroringActivity test double, a thin constructor wrapper around MirroringActivity for use in unit tests.
// ---

#include "chrome/browser/media/router/providers/cast/mock_mirroring_activity.h"

namespace media_router {

MockMirroringActivity::MockMirroringActivity(
    const MediaRoute& route,
    const std::string& app_id,
    OnStopCallback on_stop,
    OnSourceChangedCallback on_source_changed)
    : MirroringActivity(route,
                        app_id,
                        nullptr,
                        nullptr,
                        logger_,
                        debugger_,
                        content::FrameTreeNodeId(),
                        CastSinkExtraData(),
                        std::move(on_stop),
                        std::move(on_source_changed)) {}

MockMirroringActivity::~MockMirroringActivity() = default;

}  // namespace media_router
