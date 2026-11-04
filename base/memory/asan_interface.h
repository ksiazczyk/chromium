// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ASan interface wrapper
// summary: Convenience header that exposes ASan poison and unpoison macros, falling back to no-op definitions when AddressSanitizer is disabled.
// ---

#ifndef BASE_MEMORY_ASAN_INTERFACE_H_
#define BASE_MEMORY_ASAN_INTERFACE_H_

// This header is a convenience wrapper that allows other code to avoid needing
// to check `#if defined(ADDRESS_SANITIZER) ...`.

#if defined(ADDRESS_SANITIZER)
#include <sanitizer/asan_interface.h>
#else
#define ASAN_POISON_MEMORY_REGION(addr, size) ((void)(addr), (void)(size))
#define ASAN_UNPOISON_MEMORY_REGION(addr, size) ((void)(addr), (void)(size))
#endif

#endif  // BASE_MEMORY_ASAN_INTERFACE_H_
