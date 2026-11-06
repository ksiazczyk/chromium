// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SharingDialogData implementation
// summary: Implements the SharingDialogData struct, including move operations and the HeaderIcons helper that pairs light and dark vector icons for the sharing dialog.
// ---

#include "components/sharing_message/sharing_dialog_data.h"

SharingDialogData::SharingDialogData() = default;

SharingDialogData::~SharingDialogData() = default;

SharingDialogData::SharingDialogData(SharingDialogData&& other) = default;

SharingDialogData& SharingDialogData::operator=(SharingDialogData&& other) =
    default;

SharingDialogData::HeaderIcons::HeaderIcons(const gfx::VectorIcon* light,
                                            const gfx::VectorIcon* dark)
    : light(light), dark(dark) {}
