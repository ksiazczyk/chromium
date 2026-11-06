// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Trivial CastMessagePortConverter stub for unsupported platforms
// summary: Provides a CastMessagePortConverter Create stub that hits NOTREACHED, used on platforms such as Windows where message ports are not supported.
// ---

#include "base/notreached.h"
#include "components/cast_streaming/browser/cast_message_port_converter.h"

namespace cast_streaming {

std::unique_ptr<CastMessagePortConverter> CastMessagePortConverter::Create(
    ReceiverSession::MessagePortProvider message_port_provider,
    base::OnceClosure on_close) {
  NOTREACHED();
}

}  // namespace cast_streaming
