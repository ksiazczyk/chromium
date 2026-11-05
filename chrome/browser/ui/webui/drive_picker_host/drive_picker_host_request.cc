// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Drive Picker Host request implementation
// summary: Implements the move-only DrivePickerHostRequest class that pairs a request type with a mojo result handler remote.
// ---

#include "chrome/browser/ui/webui/drive_picker_host/drive_picker_host_request.h"

#include <utility>

namespace drive_picker_host {

DrivePickerHostRequest::DrivePickerHostRequest(
    RequestType type,
    mojo::PendingRemote<mojom::DrivePickerResultHandler> result_handler)
    : type_(type), result_handler_(std::move(result_handler)) {}

DrivePickerHostRequest::DrivePickerHostRequest(DrivePickerHostRequest&&) =
    default;

DrivePickerHostRequest& DrivePickerHostRequest::operator=(
    DrivePickerHostRequest&&) = default;

DrivePickerHostRequest::~DrivePickerHostRequest() = default;

}  // namespace drive_picker_host
