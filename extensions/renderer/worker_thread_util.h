// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Worker thread utility declarations
// summary: Declares worker_thread_util helpers for detecting worker threads and checking active interaction in a service worker global scope.
// ---

#ifndef EXTENSIONS_RENDERER_WORKER_THREAD_UTIL_H_
#define EXTENSIONS_RENDERER_WORKER_THREAD_UTIL_H_

namespace extensions {
namespace worker_thread_util {

// Returns true if the current thread is a worker thread.
bool IsWorkerThread();

// Returns true if the current Service Worker global scope has an active
// interaction.
//
// Valid only on worker thread.
bool HasWorkerContextProxyInteraction();

}  // namespace worker_thread_util
}  // namespace extensions

#endif  // EXTENSIONS_RENDERER_WORKER_THREAD_UTIL_H_
