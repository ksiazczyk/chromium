// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock media notification item implementation
// summary: Implements the MockMediaNotificationItem test double, providing default construction, destruction, and weak pointer support for tests.
// ---

#include "components/media_message_center/mock_media_notification_item.h"

namespace media_message_center {
namespace test {

MockMediaNotificationItem::MockMediaNotificationItem() = default;

MockMediaNotificationItem::~MockMediaNotificationItem() = default;

base::WeakPtr<MockMediaNotificationItem>
MockMediaNotificationItem::GetWeakPtr() {
  return weak_ptr_factory_.GetWeakPtr();
}

}  // namespace test
}  // namespace media_message_center
