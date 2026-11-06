// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock media notification view implementation
// summary: Implements the MockMediaNotificationView test double with only default constructor and destructor definitions.
// ---

#include "components/media_message_center/mock_media_notification_view.h"

namespace media_message_center {
namespace test {

MockMediaNotificationView::MockMediaNotificationView() = default;

MockMediaNotificationView::~MockMediaNotificationView() = default;

}  // namespace test
}  // namespace media_message_center
