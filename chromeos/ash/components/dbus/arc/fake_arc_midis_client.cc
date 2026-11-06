// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake ArcMidisClient implementation
// summary: Implements the fake ArcMidisClient D-Bus client with a no-op Init and a BootstrapMojoConnection that asynchronously reports failure.
// ---

#include "chromeos/ash/components/dbus/arc/fake_arc_midis_client.h"

#include <utility>

#include "base/functional/bind.h"
#include "base/functional/callback.h"
#include "base/task/single_thread_task_runner.h"

namespace ash {

void FakeArcMidisClient::Init(dbus::Bus* bus) {}

void FakeArcMidisClient::BootstrapMojoConnection(
    base::ScopedFD fd,
    chromeos::VoidDBusMethodCallback callback) {
  base::SingleThreadTaskRunner::GetCurrentDefault()->PostTask(
      FROM_HERE, base::BindOnce(std::move(callback), false));
}

}  // namespace ash
