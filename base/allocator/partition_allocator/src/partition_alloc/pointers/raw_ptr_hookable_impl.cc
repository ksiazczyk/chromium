// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Hookable raw_ptr hooks implementation
// summary: Implements default no-op raw_ptr hooks plus functions to get, install, and reset the global hook set used by the hookable raw_ptr implementation.
// ---

#include "partition_alloc/pointers/raw_ptr_hookable_impl.h"

#include <atomic>
#include <cstdint>

namespace base::internal {

namespace {

void DefaultWrapPtrHook(uintptr_t address, bool unprotected_in_release) {}
void DefaultReleaseWrappedPtrHook(uintptr_t address,
                                  bool unprotected_in_release) {}
void DefaultUnwrapForDereferenceHook(uintptr_t address,
                                     bool unprotected_in_release) {}
void DefaultUnwrapForExtractionHook(uintptr_t address,
                                    bool unprotected_in_release) {}
void DefaultUnwrapForComparisonHook(uintptr_t address) {}
void DefaultAdvanceHook(uintptr_t old_address, uintptr_t new_address) {}
void DefaultDuplicateHook(uintptr_t address, bool unprotected_in_release) {}
void DefaultWrapPtrForDuplicationHook(uintptr_t address,
                                      bool unprotected_in_release) {}
void DefaultUnsafelyUnwrapForDuplicationHook(uintptr_t address) {}

constexpr RawPtrHooks default_hooks = {
    DefaultWrapPtrHook,
    DefaultReleaseWrappedPtrHook,
    DefaultUnwrapForDereferenceHook,
    DefaultUnwrapForExtractionHook,
    DefaultUnwrapForComparisonHook,
    DefaultAdvanceHook,
    DefaultDuplicateHook,
    DefaultWrapPtrForDuplicationHook,
    DefaultUnsafelyUnwrapForDuplicationHook,
};

}  // namespace

std::atomic<const RawPtrHooks*> g_hooks{&default_hooks};

const RawPtrHooks* GetRawPtrHooks() {
  return g_hooks.load(std::memory_order_relaxed);
}

void InstallRawPtrHooks(const RawPtrHooks* hooks) {
  g_hooks.store(hooks, std::memory_order_relaxed);
}

void ResetRawPtrHooks() {
  InstallRawPtrHooks(&default_hooks);
}

}  // namespace base::internal
