// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Socket factory getter wrapper
// summary: Forwards Set, Clear and IsSet calls to the Open Screen platform socket factory getter used to supply sockets for Cast Streaming.
// ---

#include "components/cast_streaming/browser/public/socket_factory_getter.h"

#include <utility>

namespace cast_streaming::SocketFactoryGetter {

void Set(openscreen_platform::SocketFactoryGetter::Callback getter) {
  openscreen_platform::SocketFactoryGetter::Set(std::move(getter));
}

void Clear() {
  openscreen_platform::SocketFactoryGetter::Clear();
}

bool IsSet() {
  return openscreen_platform::SocketFactoryGetter::IsSet();
}

}  // namespace cast_streaming::SocketFactoryGetter
