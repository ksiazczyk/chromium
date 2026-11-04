// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CollectionSaveForwarder implementation
// summary: Implements forwarding of save requests for tab collections and tab groups to the tab state storage service.
// ---

#include "chrome/browser/tab/collection_save_forwarder.h"

#include <memory>

#include "chrome/browser/tab/tab_state_storage_service.h"
#include "components/tab_groups/tab_group_id.h"
#include "components/tabs/public/tab_strip_collection.h"

namespace tabs {

CollectionSaveForwarder::CollectionSaveForwarder(
    TabCollection* collection,
    TabStateStorageService* service)
    : service_(service), collection_(collection) {}

CollectionSaveForwarder::~CollectionSaveForwarder() = default;

CollectionSaveForwarder::CollectionSaveForwarder(
    CollectionSaveForwarder&&) noexcept = default;
CollectionSaveForwarder& CollectionSaveForwarder::operator=(
    CollectionSaveForwarder&&) noexcept = default;

// static
CollectionSaveForwarder CollectionSaveForwarder::CreateForTabGroupTabCollection(
    tab_groups::TabGroupId group_id,
    TabStripCollection* tab_strip_collection,
    TabStateStorageService* service) {
  return CollectionSaveForwarder(
      tab_strip_collection->GetTabGroupCollection(group_id), service);
}

// static
CollectionSaveForwarder CollectionSaveForwarder::CreateForTabStripCollection(
    TabStripCollection* tab_strip_collection,
    TabStateStorageService* service) {
  return CollectionSaveForwarder(tab_strip_collection, service);
}

void CollectionSaveForwarder::SavePayload() {
  service_->SavePayload(collection_);
}

}  // namespace tabs
