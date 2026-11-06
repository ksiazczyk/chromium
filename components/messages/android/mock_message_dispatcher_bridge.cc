// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock message dispatcher bridge implementation
// summary: Implements the mock MessageDispatcherBridge used by unit tests, stubbing drawable ID mapping and storing the embedder's messages-enabled setting.
// ---

#include "components/messages/android/mock_message_dispatcher_bridge.h"

namespace messages {

MockMessageDispatcherBridge::MockMessageDispatcherBridge() = default;
MockMessageDispatcherBridge::~MockMessageDispatcherBridge() = default;

int MockMessageDispatcherBridge::MapToJavaDrawableId(int resource_id) {
  return -1;
}

void MockMessageDispatcherBridge::SetMessagesEnabledForEmbedder(
    bool messages_enabled_for_embedder) {
  messages_enabled_for_embedder_ = messages_enabled_for_embedder;
}

}  // namespace messages
