// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test media sinks observer implementation
// summary: Implements TestMediaSinksObserver, storing received sinks in a name-to-sink map for verification in Media Router tests.
// ---

#include <string>
#include <utility>

#include "chrome/test/media_router/test_media_sinks_observer.h"
#include "components/media_router/browser/media_router.h"

namespace media_router {

TestMediaSinksObserver::TestMediaSinksObserver(MediaRouter* router,
                                               const MediaSource& source,
                                               const url::Origin& origin)
    : MediaSinksObserver(router, source, origin) {}

TestMediaSinksObserver::~TestMediaSinksObserver() = default;

void TestMediaSinksObserver::OnSinksReceived(
    const std::vector<MediaSink>& result) {
  sink_map.clear();
  for (const MediaSink& sink : result) {
    sink_map.insert(std::make_pair(sink.name(), sink));
  }
}

}  // namespace media_router
