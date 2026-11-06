// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CallMethodError implementation
// summary: Implements CallMethodError, extracting the error name and message from a D-Bus error response.
// ---

#include "components/dbus/utils/call_method.h"

#include "dbus/message.h"

namespace dbus_utils {

namespace {

std::string GetErrorMessage(dbus::ErrorResponse* error_response) {
  std::string error_message;
  if (!error_response) {
    return error_message;
  }
  dbus::MessageReader reader(error_response);
  reader.PopString(&error_message);
  return error_message;
}

}  // namespace

CallMethodError::CallMethodError(CallMethodErrorStatus status,
                                 dbus::ErrorResponse* error_response)
    : status(status),
      error_name(error_response ? error_response->GetErrorName()
                                : std::string()),
      error_message(GetErrorMessage(error_response)) {}

}  // namespace dbus_utils
