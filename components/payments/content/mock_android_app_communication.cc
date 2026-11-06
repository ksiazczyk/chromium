// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock Android app communication implementation
// summary: Implements the constructor and destructor of MockAndroidAppCommunication, a test double for communicating with Android payment apps.
// ---

#include "components/payments/content/mock_android_app_communication.h"
#include "content/public/browser/browser_context.h"

namespace payments {

MockAndroidAppCommunication::MockAndroidAppCommunication(
    content::BrowserContext* context)
    : AndroidAppCommunication(context) {}

MockAndroidAppCommunication::~MockAndroidAppCommunication() = default;

}  // namespace payments
