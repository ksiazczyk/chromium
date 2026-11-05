// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scoped thread pool implementation
// summary: Creates and starts a Chrome setup thread pool on construction and shuts it down on destruction.
// ---

#include "chrome/installer/setup/scoped_thread_pool.h"

#include "base/task/thread_pool/thread_pool_instance.h"

ScopedThreadPool::ScopedThreadPool() {
  base::ThreadPoolInstance::CreateAndStartWithDefaultParams("chrome_setup");
}

ScopedThreadPool::~ScopedThreadPool() {
  base::ThreadPoolInstance::Get()->Shutdown();
}
