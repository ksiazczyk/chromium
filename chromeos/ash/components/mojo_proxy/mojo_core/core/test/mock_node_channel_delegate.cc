// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock node channel delegate implementation
// summary: Implements the constructor and destructor of the mock NodeChannel delegate used by NodeChannel unit tests and fuzzers.
// ---

#include "chromeos/ash/components/mojo_proxy/mojo_core/core/test/mock_node_channel_delegate.h"

namespace mojo_legacy {
namespace core {

MockNodeChannelDelegate::MockNodeChannelDelegate() = default;

MockNodeChannelDelegate::~MockNodeChannelDelegate() = default;

}  // namespace core
}  // namespace mojo_legacy
