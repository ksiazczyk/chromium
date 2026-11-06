// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock origin trials settings storage for tests
// summary: Declares a GMock mock of OriginTrialsSettingsStorage that returns canned settings for use in unit tests.
// ---

#ifndef COMPONENTS_EMBEDDER_SUPPORT_ORIGIN_TRIALS_MOCK_ORIGIN_TRIALS_SETTINGS_STORAGE_H_
#define COMPONENTS_EMBEDDER_SUPPORT_ORIGIN_TRIALS_MOCK_ORIGIN_TRIALS_SETTINGS_STORAGE_H_

#include "components/embedder_support/origin_trials/origin_trials_settings_storage.h"
#include "testing/gmock/include/gmock/gmock.h"

namespace embedder_support {

class MockOriginTrialsSettingsStorage : public OriginTrialsSettingsStorage {
 public:
  MockOriginTrialsSettingsStorage();
  ~MockOriginTrialsSettingsStorage() override;
  MOCK_METHOD(blink::mojom::OriginTrialsSettingsPtr,
              GetSettings,
              (),
              (const override));
  MOCK_METHOD(void,
              PopulateSettings,
              (const base::ListValue& disabled_tokens_list),
              (override));
};

}  // namespace embedder_support

#endif  // COMPONENTS_EMBEDDER_SUPPORT_ORIGIN_TRIALS_MOCK_ORIGIN_TRIALS_SETTINGS_STORAGE_H_
