// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Manta service provider singleton implementation
// summary: Implements the process-wide MantaServiceProvider singleton with checks that only one instance exists at a time.
// ---

#include "chromeos/ash/components/manta/manta_service_provider.h"

#include "base/check.h"
#include "base/check_deref.h"
#include "base/check_op.h"

namespace ash {
namespace {
MantaServiceProvider* g_instance = nullptr;
}  // namespace

MantaServiceProvider::MantaServiceProvider() {
  CHECK(!g_instance);
  g_instance = this;
}

MantaServiceProvider::~MantaServiceProvider() {
  CHECK_EQ(g_instance, this);
  g_instance = nullptr;
}

// static
MantaServiceProvider& MantaServiceProvider::Get() {
  return CHECK_DEREF(g_instance);
}

}  // namespace ash
