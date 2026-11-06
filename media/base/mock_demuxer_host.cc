// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock demuxer host implementation
// summary: Provides the constructor and destructor for MockDemuxerHost, a gmock stand-in for DemuxerHost used in media tests.
// ---

#include "media/base/mock_demuxer_host.h"

namespace media {

MockDemuxerHost::MockDemuxerHost() = default;

MockDemuxerHost::~MockDemuxerHost() = default;

}  // namespace media
