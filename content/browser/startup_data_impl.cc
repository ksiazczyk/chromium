// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser startup data implementation
// summary: Defines the constructor and destructor of StartupDataImpl, the browser implementation of the StartupData struct.
// ---

#include "content/browser/startup_data_impl.h"

#include "content/browser/tracing/background_tracing_manager_impl.h"

namespace content {

StartupDataImpl::StartupDataImpl() = default;

StartupDataImpl::~StartupDataImpl() = default;

}  // namespace content
