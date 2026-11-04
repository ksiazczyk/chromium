// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock Lobster system state provider
// summary: Defines a gmock mock of LobsterSystemStateProvider whose GetSystemState method can be stubbed in tests.
// ---

#ifndef CHROME_BROWSER_ASH_LOBSTER_MOCK_LOBSTER_SYSTEM_STATE_PROVIDER_H_
#define CHROME_BROWSER_ASH_LOBSTER_MOCK_LOBSTER_SYSTEM_STATE_PROVIDER_H_

#include "ash/public/cpp/lobster/lobster_system_state.h"
#include "ash/public/cpp/lobster/lobster_text_input_context.h"
#include "chrome/browser/ash/lobster/lobster_system_state_provider.h"
#include "testing/gmock/include/gmock/gmock.h"

class MockLobsterSystemStateProvider
    : virtual public LobsterSystemStateProvider {
 public:
  MockLobsterSystemStateProvider();
  ~MockLobsterSystemStateProvider() override;

  MOCK_METHOD(ash::LobsterSystemState,
              GetSystemState,
              (const ash::LobsterTextInputContext& text_input_context),
              (override));
};

#endif  // CHROME_BROWSER_ASH_LOBSTER_MOCK_LOBSTER_SYSTEM_STATE_PROVIDER_H_
