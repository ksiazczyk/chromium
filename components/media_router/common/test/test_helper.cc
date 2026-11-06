// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Media router test helper implementation
// summary: Implements factory functions for Cast, DIAL and wired display MediaSink objects plus a TestMediaSinkService using a mock one-shot timer.
// ---

#include "components/media_router/common/test/test_helper.h"

#include "base/functional/callback_helpers.h"
#include "base/memory/ptr_util.h"
#include "build/build_config.h"
#include "components/media_router/common/media_sink.h"
#include "components/media_router/common/mojom/media_route_provider_id.mojom.h"

namespace media_router {

MediaSink CreateCastSink(const std::string& id, const std::string& name) {
  return MediaSink{id, name, SinkIconType::CAST,
                   mojom::MediaRouteProviderId::CAST};
}

MediaSink CreateDialSink(const std::string& id, const std::string& name) {
  return MediaSink{id, name, SinkIconType::GENERIC,
                   mojom::MediaRouteProviderId::DIAL};
}

MediaSink CreateWiredDisplaySink(const std::string& id,
                                 const std::string& name) {
  return MediaSink{id, name, SinkIconType::GENERIC,
                   mojom::MediaRouteProviderId::WIRED_DISPLAY};
}

#if !BUILDFLAG(IS_ANDROID)
TestMediaSinkService::TestMediaSinkService()
    : TestMediaSinkService(base::DoNothing()) {}

TestMediaSinkService::TestMediaSinkService(
    const OnSinksDiscoveredCallback& callback)
    : MediaSinkServiceBase(callback), timer_(new base::MockOneShotTimer()) {
  SetTimerForTest(base::WrapUnique(timer_.get()));
}

TestMediaSinkService::~TestMediaSinkService() = default;
#endif  // !BUILDFLAG(IS_ANDROID)

}  // namespace media_router
