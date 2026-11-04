// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Accessibility controller test API implementation
// summary: Implements the accessibility controller test API, exposing feature toggles, download progress and dialog helpers for tests.
// relations:
//   - depends_on /ash/accessibility/accessibility_controller_test_api_impl.h
//   - depends_on /ash/accelerators/accelerator_controller_impl.h
//   - depends_on /ash/accessibility/accessibility_controller.h
// ---

#include "ash/accessibility/accessibility_controller_test_api_impl.h"

#include "ash/accelerators/accelerator_controller_impl.h"
#include "ash/accessibility/accessibility_controller.h"
#include "ash/shell.h"
#include "base/functional/callback.h"

namespace ash {

namespace {

AccessibilityController* GetController() {
  return Shell::Get()->accessibility_controller();
}

}  // namespace

AccessibilityControllerTestApiImpl::AccessibilityControllerTestApiImpl() =
    default;

AccessibilityControllerTestApiImpl::~AccessibilityControllerTestApiImpl() =
    default;

void AccessibilityControllerTestApiImpl::SetLargeCursorEnabled(bool enabled) {
  GetController()->large_cursor().SetEnabled(enabled);
}

bool AccessibilityControllerTestApiImpl::IsLargeCursorEnabled() const {
  return GetController()->large_cursor().enabled();
}

int AccessibilityControllerTestApiImpl::GetDictationSodaDownloadProgress()
    const {
  return GetController()->dictation_soda_download_progress();
}

bool AccessibilityControllerTestApiImpl::IsDictationKeboardDialogShowing()
    const {
  return GetController()
      ->IsDictationKeyboardDialogShowingForTesting();  // IN-TEST
}

void AccessibilityControllerTestApiImpl::AcceptDictationKeyboardDialog() {
  return GetController()->AcceptDictationKeyboardDialogForTesting();  // IN-TEST
}

void AccessibilityControllerTestApiImpl::DismissDictationKeyboardDialog() {
  return GetController()
      ->DismissDictationKeyboardDialogForTesting();  // IN-TEST
}

void AccessibilityControllerTestApiImpl::AddShowToastCallbackForTesting(
    base::RepeatingCallback<void(AccessibilityToastType)> callback) const {
  GetController()->AddShowToastCallbackForTesting(
      std::move(callback));  // IN-TEST
}

// static
std::unique_ptr<AccessibilityControllerTestApi>
AccessibilityControllerTestApi::Create() {
  return std::make_unique<AccessibilityControllerTestApiImpl>();
}

}  // namespace ash
