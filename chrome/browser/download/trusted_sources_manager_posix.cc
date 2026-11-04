// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TrustedSourcesManager POSIX implementation
// summary: Provides the POSIX implementation of TrustedSourcesManager::Create, returning a default instance based on the command line switch.
// ---

#include "chrome/browser/download/trusted_sources_manager.h"

#include "base/memory/ptr_util.h"

// static
std::unique_ptr<TrustedSourcesManager> TrustedSourcesManager::Create() {
  return base::WrapUnique(new TrustedSourcesManager);
}
