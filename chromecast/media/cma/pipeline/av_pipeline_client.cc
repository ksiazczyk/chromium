// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AvPipelineClient implementation
// summary: Implements the constructors, move operations and destructor of the AvPipelineClient callback struct.
// ---

#include "chromecast/media/cma/pipeline/av_pipeline_client.h"

namespace chromecast {
namespace media {

AvPipelineClient::AvPipelineClient() {
}

AvPipelineClient::AvPipelineClient(AvPipelineClient&& other) = default;
AvPipelineClient& AvPipelineClient::operator=(AvPipelineClient&& other) =
    default;

AvPipelineClient::~AvPipelineClient() {
}

}  // namespace media
}  // namespace chromecast
