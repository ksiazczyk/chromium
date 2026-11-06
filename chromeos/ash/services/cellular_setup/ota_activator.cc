// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OTA activator base implementation
// summary: Implements the OtaActivator base class, providing remote generation for the carrier portal handler and invocation of the finished callback.
// ---

#include "chromeos/ash/services/cellular_setup/ota_activator.h"

#include <utility>

namespace ash::cellular_setup {

OtaActivator::OtaActivator(base::OnceClosure on_finished_callback)
    : on_finished_callback_(std::move(on_finished_callback)) {}

OtaActivator::~OtaActivator() = default;

mojo::PendingRemote<mojom::CarrierPortalHandler>
OtaActivator::GenerateRemote() {
  // Only one mojo::PendingRemote<> should be created per instance.
  DCHECK(!receiver_.is_bound());
  return receiver_.BindNewPipeAndPassRemote();
}

void OtaActivator::InvokeOnFinishedCallback() {
  DCHECK(on_finished_callback_);
  std::move(on_finished_callback_).Run();
}

}  // namespace ash::cellular_setup
