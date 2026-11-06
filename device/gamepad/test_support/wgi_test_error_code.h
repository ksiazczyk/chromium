// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WGI test error code enum
// summary: Defines the WgiTestErrorCode enum used by WgiDataFetcherWin tests to simulate errors that can occur when interacting with the Windows Gaming Input OS APIs.
// ---

#ifndef DEVICE_GAMEPAD_TEST_SUPPORT_WGI_TEST_ERROR_CODE_H_
#define DEVICE_GAMEPAD_TEST_SUPPORT_WGI_TEST_ERROR_CODE_H_

namespace device {

// Enum used in the WgiDataFetcheWin tests to simulate errors that might happen
// when interacting with the OS API's.
enum class WgiTestErrorCode {
  kOk,
  kErrorWgiGamepadActivateFailed,
  kErrorWgiGamepadGetCurrentReadingFailed,
  kErrorWgiGamepadGetButtonLabelFailed,
  kErrorWgiRawGameControllerActivateFailed,
  kErrorWgiRawGameControllerFromGameControllerFailed,
  kErrorWgiRawGameControllerGetDisplayNameFailed,
  kErrorWgiRawGameControllerGetHardwareProductIdFailed,
  kErrorWgiRawGameControllerGetHardwareVendorIdFailed,
  kGamepadAddGamepadAddedFailed,
  kGamepadAddGamepadRemovedFailed,
  kGamepadRemoveGamepadAddedFailed,
  kGamepadRemoveGamepadRemovedFailed,
  kNullXInputGetCapabilitiesPointer,
  kNullXInputGetStateExPointer
};

}  // namespace device

#endif  // DEVICE_GAMEPAD_TEST_SUPPORT_WGI_TEST_ERROR_CODE_H_
