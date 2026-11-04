// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Holding space keyed service delegate base implementation
// summary: Implements the abstract delegate base class, providing default no-op model observer callbacks and persistence restore notification for holding space delegates.
// ---

#include "chrome/browser/ui/ash/holding_space/holding_space_keyed_service_delegate.h"

namespace ash {

HoldingSpaceKeyedServiceDelegate::~HoldingSpaceKeyedServiceDelegate() = default;

void HoldingSpaceKeyedServiceDelegate::NotifyPersistenceRestored() {
  CHECK(is_restoring_persistence_, base::NotFatalUntil::M162);
  is_restoring_persistence_ = false;
  OnPersistenceRestored();
}

HoldingSpaceKeyedServiceDelegate::HoldingSpaceKeyedServiceDelegate(
    HoldingSpaceKeyedService* service,
    HoldingSpaceModel* model)
    : service_(service), model_(model) {
  holding_space_model_observation_.Observe(model);
}

void HoldingSpaceKeyedServiceDelegate::OnHoldingSpaceItemsAdded(
    const std::vector<const HoldingSpaceItem*>& items) {}

void HoldingSpaceKeyedServiceDelegate::OnHoldingSpaceItemsRemoved(
    const std::vector<const HoldingSpaceItem*>& items) {}

void HoldingSpaceKeyedServiceDelegate::OnHoldingSpaceItemInitialized(
    const HoldingSpaceItem* item) {}

void HoldingSpaceKeyedServiceDelegate::OnPersistenceRestored() {}

}  // namespace ash
