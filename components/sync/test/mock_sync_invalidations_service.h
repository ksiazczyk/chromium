// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockSyncInvalidationsService gmock mock header
// summary: Declares a gmock mock of SyncInvalidationsService covering listeners, FCM token observers, and interested data types for invalidation tests.
// ---

#ifndef COMPONENTS_SYNC_TEST_MOCK_SYNC_INVALIDATIONS_SERVICE_H_
#define COMPONENTS_SYNC_TEST_MOCK_SYNC_INVALIDATIONS_SERVICE_H_

#include <string>

#include "components/sync/invalidations/sync_invalidations_service.h"
#include "testing/gmock/include/gmock/gmock.h"

namespace syncer {

class MockSyncInvalidationsService : public SyncInvalidationsService {
 public:
  MockSyncInvalidationsService();
  ~MockSyncInvalidationsService() override;

  MOCK_METHOD(void, StartListening, ());
  MOCK_METHOD(void, StopListening, ());
  MOCK_METHOD(void, StopListeningPermanently, ());
  MOCK_METHOD(void, AddListener, (InvalidationsListener * listener));
  MOCK_METHOD(bool, HasListener, (InvalidationsListener * listener));
  MOCK_METHOD(void, RemoveListener, (InvalidationsListener * listener));
  MOCK_METHOD(void,
              AddTokenObserver,
              (FCMRegistrationTokenObserver * observer));
  MOCK_METHOD(void,
              RemoveTokenObserver,
              (FCMRegistrationTokenObserver * observer));
  MOCK_METHOD(std::optional<std::string>, GetFCMRegistrationToken, (), (const));
  MOCK_METHOD(void,
              SetInterestedDataTypesHandler,
              (InterestedDataTypesHandler * handler));
  MOCK_METHOD(std::optional<DataTypeSet>, GetInterestedDataTypes, (), (const));
  MOCK_METHOD(void, SetInterestedDataTypes, (const DataTypeSet& data_types));
  MOCK_METHOD(void,
              SetCommittedAdditionalInterestedDataTypesCallback,
              (InterestedDataTypesAppliedCallback callback));
};

}  // namespace syncer

#endif  // COMPONENTS_SYNC_TEST_MOCK_SYNC_INVALIDATIONS_SERVICE_H_
