// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cast tracing agent header
// summary: Declares registration of the Cast tracing Perfetto data source and its kCastTracingDataSource feature flag.
// ---

#ifndef CONTENT_BROWSER_TRACING_CAST_TRACING_AGENT_H_
#define CONTENT_BROWSER_TRACING_CAST_TRACING_AGENT_H_

#include "base/feature_list.h"

namespace content {

void RegisterCastTracingDataSource();

BASE_DECLARE_FEATURE(kCastTracingDataSource);

}  // namespace content

#endif  // CONTENT_BROWSER_TRACING_CAST_TRACING_AGENT_H_
