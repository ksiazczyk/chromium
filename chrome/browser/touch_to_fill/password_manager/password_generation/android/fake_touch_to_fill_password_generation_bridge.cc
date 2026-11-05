// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake Touch to Fill password generation bridge implementation
// summary: Implements a fake bridge that stores the delegate and simulates dismissal for use in tests.
// ---

#include "chrome/browser/touch_to_fill/password_manager/password_generation/android/fake_touch_to_fill_password_generation_bridge.h"

#include "chrome/browser/touch_to_fill/password_manager/password_generation/android/touch_to_fill_password_generation_delegate.h"

FakeTouchToFillPasswordGenerationBridge::
    FakeTouchToFillPasswordGenerationBridge() = default;

FakeTouchToFillPasswordGenerationBridge::
    ~FakeTouchToFillPasswordGenerationBridge() = default;

bool FakeTouchToFillPasswordGenerationBridge::Show(
    content::WebContents* web_contents,
    PrefService* pref_service,
    TouchToFillPasswordGenerationDelegate* delegate,
    std::u16string password,
    std::string account) {
  delegate_ = delegate;
  return true;
}

void FakeTouchToFillPasswordGenerationBridge::Hide() {
  OnDismissed(/*generated_password_accepted=*/false);
}

void FakeTouchToFillPasswordGenerationBridge::OnDismissed(
    bool generated_password_accepted) {
  delegate_->OnDismissed(generated_password_accepted);
}

void FakeTouchToFillPasswordGenerationBridge::OnGeneratedPasswordAccepted(
    const std::u16string& password) {}

void FakeTouchToFillPasswordGenerationBridge::OnGeneratedPasswordRejected() {}
