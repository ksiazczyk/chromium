// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock mirroring service host implementation
// summary: Provides constructor and destructor definitions for the MockMirroringServiceHost test double used in mirroring tests.
// ---

#include "chrome/browser/media/router/providers/cast/mock_mirroring_service_host.h"

namespace media_router {

MockMirroringServiceHost::MockMirroringServiceHost() = default;
MockMirroringServiceHost::~MockMirroringServiceHost() = default;

}  // namespace media_router
