// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Nigori metadata batch implementation
// summary: Implements move construction and destruction for NigoriMetadataBatch, which bundles Nigori data type state and entity metadata.
// ---

#include "components/sync/nigori/nigori_local_change_processor.h"

#include <memory>

#include "components/sync/protocol/entity_metadata.pb.h"

namespace syncer {

NigoriMetadataBatch::NigoriMetadataBatch() = default;

NigoriMetadataBatch::NigoriMetadataBatch(NigoriMetadataBatch&& other)
    : data_type_state(std::move(other.data_type_state)),
      entity_metadata(std::move(other.entity_metadata)) {}

NigoriMetadataBatch::~NigoriMetadataBatch() = default;

}  // namespace syncer
