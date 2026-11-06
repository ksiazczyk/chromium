// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Crashpad handler stub for non-crashpad builds
// summary: Provides a no-op RunAsCrashpadHandlerIfRequired for services built without crashpad support.
// ---

#include "chrome/windows_services/service_program/crashpad_handler.h"

std::optional<int> RunAsCrashpadHandlerIfRequired(const base::CommandLine&) {
  return std::nullopt;
}
