// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MockSharingMessageSender implementation
// summary: Constructs a MockSharingMessageSender with null dependencies and defines its destructor.
// ---

#include "components/sharing_message/mock_sharing_message_sender.h"

#include "components/sharing_message/sharing_channel_sender.h"

MockSharingMessageSender::MockSharingMessageSender()
    : SharingMessageSender(
          /*channel_sender=*/nullptr,
          /*local_device_info_provider=*/nullptr,
          /*task_ruunner=*/nullptr) {}

MockSharingMessageSender::~MockSharingMessageSender() = default;
