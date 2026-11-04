// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Local authentication test API declarations
// summary: Declares test API classes for simulating password and PIN submission and closing local authentication dialogs, plus access to available auth factors.
// relations:
//   - depends_on /ash/auth/views/active_session_auth_view.h
//   - depends_on /ash/login/ui/local_authentication_request_controller_impl.h
//   - depends_on /base/memory/raw_ptr.h
// ---

#ifndef ASH_LOGIN_UI_LOCAL_AUTHENTICATION_TEST_API_H_
#define ASH_LOGIN_UI_LOCAL_AUTHENTICATION_TEST_API_H_

#include <memory>
#include <string>
#include <string_view>

#include "ash/auth/views/active_session_auth_view.h"
#include "ash/login/ui/local_authentication_request_controller_impl.h"
#include "ash/public/cpp/login/local_authentication_test_api.h"
#include "base/memory/raw_ptr.h"
#include "chromeos/ash/components/cryptohome/auth_factor.h"

namespace ash {

std::unique_ptr<LocalAuthenticationTestApi> GetLocalAuthenticationTestApi(
    LocalAuthenticationRequestController* controller);

class LocalAuthenticationRequestControllerImplTestApi
    : public LocalAuthenticationTestApi {
 public:
  LocalAuthenticationRequestControllerImplTestApi();
  ~LocalAuthenticationRequestControllerImplTestApi() override;
  LocalAuthenticationRequestControllerImplTestApi(
      const LocalAuthenticationRequestControllerImplTestApi&) = delete;
  LocalAuthenticationRequestControllerImplTestApi& operator=(
      const LocalAuthenticationRequestControllerImplTestApi&) = delete;

  // LocalAuthenticationTestApi:
  // Simulates submitting the `password` to cryptohome as if the user
  // manually entered it.
  void SubmitPassword(const std::string& password) override;

  // Simulates submitting the `pin` to cryptohome as if the user
  // manually entered it.
  void SubmitPin(const std::string& password) override;

  void Close() override;
};

class LocalAuthenticationWithPinTestApi : public LocalAuthenticationTestApi {
 public:
  explicit LocalAuthenticationWithPinTestApi(
      LocalAuthenticationWithPinControllerImpl* controller);
  ~LocalAuthenticationWithPinTestApi() override;
  LocalAuthenticationWithPinTestApi(const LocalAuthenticationWithPinTestApi&) =
      delete;
  LocalAuthenticationWithPinTestApi& operator=(
      const LocalAuthenticationWithPinTestApi&) = delete;

  // LocalAuthenticationTestApi:
  // Simulates submitting the `password` to cryptohome as if the user
  // manually entered it.
  void SubmitPassword(const std::string& password) override;

  // Simulates submitting the `pin` to cryptohome as if the user
  // manually entered it.
  void SubmitPin(const std::string& password) override;

  // Returns the known-to-be-available factors that
  // `ActiveSessionAuthView` was rendered with.
  AuthFactorSet GetAvailableFactors() const;

  void SetPinStatus(std::unique_ptr<cryptohome::PinStatus> pin_status);

  std::u16string_view GetPinStatusMessage() const;

  void Close() override;

  raw_ptr<ActiveSessionAuthView> GetContentsView();

 private:
  const raw_ptr<LocalAuthenticationWithPinControllerImpl> controller_;
};

}  // namespace ash

#endif  // ASH_LOGIN_UI_LOCAL_AUTHENTICATION_TEST_API_H_
