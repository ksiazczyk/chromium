// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CellularSetupBase implementation
// summary: Implements CellularSetupBase, binding incoming mojo receivers for the mojom::CellularSetup interface to the service instance.
// ---

#include "chromeos/ash/services/cellular_setup/cellular_setup_base.h"

namespace ash::cellular_setup {

CellularSetupBase::CellularSetupBase() = default;

CellularSetupBase::~CellularSetupBase() = default;

void CellularSetupBase::BindReceiver(
    mojo::PendingReceiver<mojom::CellularSetup> receiver) {
  receivers_.Add(this, std::move(receiver));
}

}  // namespace ash::cellular_setup
