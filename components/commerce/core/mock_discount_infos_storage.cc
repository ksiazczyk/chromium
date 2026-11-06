// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock discount infos storage implementation
// summary: Implements MockDiscountInfosStorage, a minimal GMock stand-in for DiscountInfosStorage used in tests.
// ---

#include "components/commerce/core/mock_discount_infos_storage.h"

namespace commerce {

MockDiscountInfosStorage::MockDiscountInfosStorage()
    : DiscountInfosStorage(nullptr, nullptr) {
}
MockDiscountInfosStorage::~MockDiscountInfosStorage() = default;

}  // namespace commerce
