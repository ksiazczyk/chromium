// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Device auth availability checker header
// summary: Declares the ChromeWebView DeviceAuthAvailabilityChecker that reports biometric and screen lock authentication capability via LAContext.
// ---

#ifndef IOS_WEB_VIEW_INTERNAL_AUTOFILL_WEB_VIEW_DEVICE_AUTH_AVAILABILITY_CHECKER_H_
#define IOS_WEB_VIEW_INTERNAL_AUTOFILL_WEB_VIEW_DEVICE_AUTH_AVAILABILITY_CHECKER_H_

#import "components/device_reauth/device_auth_availability_checker.h"

namespace autofill {

// ChromeWebView implementation of
// `device_reauth::DeviceAuthAvailabilityChecker`.
//
// Device capability checks are answered directly via `LAContext`.
class WebViewDeviceAuthAvailabilityChecker
    : public device_reauth::DeviceAuthAvailabilityChecker {
 public:
  WebViewDeviceAuthAvailabilityChecker();
  WebViewDeviceAuthAvailabilityChecker(
      const WebViewDeviceAuthAvailabilityChecker&) = delete;
  WebViewDeviceAuthAvailabilityChecker& operator=(
      const WebViewDeviceAuthAvailabilityChecker&) = delete;
  ~WebViewDeviceAuthAvailabilityChecker() override;

  // device_reauth::DeviceAuthAvailabilityChecker:
  bool CanAuthenticateWithBiometrics() override;
  bool CanAuthenticateWithBiometricOrScreenLock() override;
};

}  // namespace autofill

#endif  // IOS_WEB_VIEW_INTERNAL_AUTOFILL_WEB_VIEW_DEVICE_AUTH_AVAILABILITY_CHECKER_H_
