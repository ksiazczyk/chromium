// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ContentCaptureData struct implementation
// summary: Implements the default constructor, copy constructor and destructor of the ContentCaptureData struct.
// ---

#include "components/content_capture/common/content_capture_data.h"

namespace content_capture {

ContentCaptureData::ContentCaptureData() = default;

ContentCaptureData::ContentCaptureData(const ContentCaptureData& data) =
    default;

ContentCaptureData::~ContentCaptureData() = default;

}  // namespace content_capture
