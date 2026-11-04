// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BeginMainFrameTraceId type alias
// summary: Defines the BeginMainFrameTraceId identifier type based on base::IdTypeU64 for tracing begin main frames.
// ---

#ifndef CC_TREES_BEGIN_MAIN_FRAME_TRACE_ID_H_
#define CC_TREES_BEGIN_MAIN_FRAME_TRACE_ID_H_

#include "base/types/id_type.h"

namespace cc {

using BeginMainFrameTraceId = base::IdTypeU64<class BeginMainFrameTraceIdTag>;

}  // namespace cc

#endif  // CC_TREES_BEGIN_MAIN_FRAME_TRACE_ID_H_
