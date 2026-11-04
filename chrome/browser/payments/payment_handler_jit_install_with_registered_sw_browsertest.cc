// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Browser test for just-in-time install with registered service worker
// summary: Browser test verifying a payment handler can still be installed just-in-time when its service worker is already registered without saved instruments.
// ---

#include "chrome/test/payments/payment_request_platform_browsertest_base.h"
#include "content/public/test/browser_test.h"
#include "content/public/test/browser_test_utils.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace payments {
namespace {

class PaymentHandlerJitInstallWithRegisteredSwTest
    : public PaymentRequestPlatformBrowserTestBase {
 protected:
  PaymentHandlerJitInstallWithRegisteredSwTest() {
    SetBypassUserInteractionForTesting();
  }
};

// If a service worker is already installed, but the instruments are not saved
// in the database, a payment handler still can be installed just-in-time.
IN_PROC_BROWSER_TEST_F(
    PaymentHandlerJitInstallWithRegisteredSwTest,
    CanJitInstallPaymentHandlerWhenServiceWorkerIsAlreadyInstalled) {
  NavigateTo("/just-in-time/test.html");
  EXPECT_EQ("success", content::EvalJs(GetActiveWebContents(),
                                       "installOnlyServiceWorker()"));
  EXPECT_EQ("success", content::EvalJs(GetActiveWebContents(),
                                       "installPaymentHandlerJustInTime()"));
}

}  // namespace
}  // namespace payments
