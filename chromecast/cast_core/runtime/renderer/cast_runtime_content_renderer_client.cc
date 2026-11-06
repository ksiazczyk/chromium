// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cast runtime content renderer client implementation
// summary: Implements CastRuntimeContentRendererClient, creating the cast streaming resource provider for the renderer.
// ---

#include "chromecast/cast_core/runtime/renderer/cast_runtime_content_renderer_client.h"

#include "components/cast_streaming/renderer/public/resource_provider.h"
#include "components/cast_streaming/renderer/public/resource_provider_factory.h"

namespace chromecast {

CastRuntimeContentRendererClient::CastRuntimeContentRendererClient() = default;

CastRuntimeContentRendererClient::~CastRuntimeContentRendererClient() = default;

std::unique_ptr<cast_streaming::ResourceProvider>
CastRuntimeContentRendererClient::CreateCastStreamingResourceProvider() {
  return cast_streaming::CreateResourceProvider();
}

}  // namespace chromecast
