// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Account preview data implementation
// summary: Defines the default constructors, destructors and assignment operators of the AccountPreviewData struct.
// ---

#include "components/signin/core/browser/account_preview_data.h"

namespace signin {

AccountPreviewData::AccountPreviewData() = default;
AccountPreviewData::AccountPreviewData(const AccountPreviewData&) = default;
AccountPreviewData::AccountPreviewData(AccountPreviewData&&) noexcept = default;
AccountPreviewData& AccountPreviewData::operator=(const AccountPreviewData&) =
    default;
AccountPreviewData& AccountPreviewData::operator=(
    AccountPreviewData&&) noexcept = default;
AccountPreviewData::~AccountPreviewData() = default;

}  // namespace signin
