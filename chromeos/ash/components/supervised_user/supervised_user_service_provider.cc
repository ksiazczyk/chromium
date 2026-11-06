// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SupervisedUserServiceProvider implementation
// summary: Implements the process-wide singleton lifecycle for SupervisedUserServiceProvider, registering and clearing the global instance in the ash namespace.
// ---

#include "chromeos/ash/components/supervised_user/supervised_user_service_provider.h"

#include "base/check.h"
#include "base/check_deref.h"
#include "base/check_op.h"

namespace ash {
namespace {
SupervisedUserServiceProvider* g_instance = nullptr;
}  // namespace

SupervisedUserServiceProvider::SupervisedUserServiceProvider() {
  CHECK(!g_instance);
  g_instance = this;
}

SupervisedUserServiceProvider::~SupervisedUserServiceProvider() {
  CHECK_EQ(g_instance, this);
  g_instance = nullptr;
}

// static
SupervisedUserServiceProvider& SupervisedUserServiceProvider::Get() {
  return CHECK_DEREF(g_instance);
}

}  // namespace ash
