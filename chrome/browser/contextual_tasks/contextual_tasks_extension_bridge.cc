// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Contextual Tasks extension bridge implementation
// summary: Implements the profile-keyed service that initializes the Contextual Tasks extension's configuration and Mojo binder providers and exposes its service worker handler.
// ---

#include "chrome/browser/contextual_tasks/contextual_tasks_extension_bridge.h"

#include "chrome/browser/contextual_tasks/contextual_tasks_extension_binder_provider.h"
#include "chrome/browser/contextual_tasks/contextual_tasks_extension_bridge_factory.h"
#include "chrome/browser/contextual_tasks/contextual_tasks_extension_config_provider.h"
#include "chrome/browser/profiles/profile.h"

namespace contextual_tasks {

ContextualTasksExtensionBridge::ContextualTasksExtensionBridge(Profile* profile)
    : service_worker_handler_(*profile) {
  ContextualTasksExtensionConfigProvider::Register(profile);
  ContextualTasksExtensionBinderProvider::Register(profile);
}

ContextualTasksExtensionBridge::~ContextualTasksExtensionBridge() = default;

void ContextualTasksExtensionBridge::Shutdown() {
  service_worker_handler_.Clear();
}

// static
ContextualTasksExtensionBridge* ContextualTasksExtensionBridge::Get(
    Profile* profile) {
  return ContextualTasksExtensionBridgeFactory::GetForProfile(profile);
}

}  // namespace contextual_tasks
