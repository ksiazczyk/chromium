// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cast streaming context setup header
// summary: Declares the Cast Streaming web URL constant and the function to apply Cast Streaming context parameters.
// ---

#ifndef FUCHSIA_WEB_CAST_STREAMING_CAST_STREAMING_H_
#define FUCHSIA_WEB_CAST_STREAMING_CAST_STREAMING_H_

#include <fuchsia/web/cpp/fidl.h>

// URL for the Cast Streaming application.
extern const char kCastStreamingWebUrl[];

// Modifies |params| to apply Cast Streaming-specific Context Params.
void ApplyCastStreamingContextParams(fuchsia::web::CreateContextParams* params);

#endif  // FUCHSIA_WEB_CAST_STREAMING_CAST_STREAMING_H_
