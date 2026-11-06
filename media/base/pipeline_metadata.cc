// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Pipeline metadata implementation
// summary: Implements PipelineMetadata constructors and destructor holding audio and video presence flags for media content.
// ---

#include "media/base/pipeline_metadata.h"

namespace media {

PipelineMetadata::PipelineMetadata() : has_audio(false), has_video(false) {}

PipelineMetadata::~PipelineMetadata() = default;

PipelineMetadata::PipelineMetadata(const PipelineMetadata&) = default;

}  // namespace
