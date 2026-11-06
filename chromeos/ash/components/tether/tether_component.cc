// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TetherComponent base class implementation
// summary: Implements the TetherComponent base class, managing observers and status transitions and notifying observers when shutdown completes.
// ---

#include "chromeos/ash/components/tether/tether_component.h"

namespace ash {

namespace tether {

TetherComponent::TetherComponent() = default;

TetherComponent::~TetherComponent() = default;

void TetherComponent::AddObserver(Observer* observer) {
  observer_list_.AddObserver(observer);
}

void TetherComponent::RemoveObserver(Observer* observer) {
  observer_list_.RemoveObserver(observer);
}

void TetherComponent::TransitionToStatus(Status new_status) {
  if (status_ == new_status)
    return;

  status_ = new_status;

  if (status_ != Status::SHUT_DOWN)
    return;

  for (auto& observer : observer_list_)
    observer.OnShutdownComplete();
}

}  // namespace tether

}  // namespace ash
