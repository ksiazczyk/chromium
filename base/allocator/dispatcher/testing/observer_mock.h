// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: ObserverMock for allocator dispatcher notifications
// summary: GoogleMock mock implementing the dispatcher observer interface with OnAllocation and OnFree methods, templated to create distinct observer types.
// ---

#ifndef BASE_ALLOCATOR_DISPATCHER_TESTING_OBSERVER_MOCK_H_
#define BASE_ALLOCATOR_DISPATCHER_TESTING_OBSERVER_MOCK_H_

#include "testing/gmock/include/gmock/gmock.h"

namespace base::allocator::dispatcher {
class AllocationNotificationData;
class FreeNotificationData;

namespace testing {

// ObserverMock is a small mock class based on GoogleMock.
// It complies to the interface enforced by the dispatcher. The template
// parameter serves only to create distinct types of observers if required.
template <typename T = void>
struct ObserverMock {
  MOCK_METHOD(void,
              OnAllocation,
              (const AllocationNotificationData& notification_data),
              ());
  MOCK_METHOD(void,
              OnFree,
              (const FreeNotificationData& notification_data),
              ());
};
}  // namespace testing
}  // namespace base::allocator::dispatcher

#endif  // BASE_ALLOCATOR_DISPATCHER_TESTING_OBSERVER_MOCK_H_
