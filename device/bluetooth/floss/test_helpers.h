// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Floss Bluetooth test helpers
// summary: Declares a gmock matcher that matches D-Bus method calls by their member name for use in Floss Bluetooth tests.
// ---

#ifndef DEVICE_BLUETOOTH_FLOSS_TEST_HELPERS_H_
#define DEVICE_BLUETOOTH_FLOSS_TEST_HELPERS_H_

namespace floss {

// Matches a dbus::MethodCall based on the method name (member).
MATCHER_P(HasMemberOf, member, "") {
  return arg->GetMember() == member;
}

}  // namespace floss

#endif  // DEVICE_BLUETOOTH_FLOSS_TEST_HELPERS_H_