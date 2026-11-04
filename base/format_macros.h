// Copyright 2009 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Portable printf format macros
// summary: Header defining portable format macros such as PRId64, PRIuS and WidePRId64 for printing 64-bit integers and size_t values across platforms.
// ---

#ifndef BASE_FORMAT_MACROS_H_
#define BASE_FORMAT_MACROS_H_

// This file defines the format macros for some integer types.

// To print a 64-bit value in a portable way:
//   int64_t value;
//   printf("xyz:%" PRId64, value);
// The "d" in the macro corresponds to %d; you can also use PRIu64 etc.
//
// For wide strings, prepend "Wide" to the macro:
//   int64_t value;
//   StringPrintf(L"xyz: %" WidePRId64, value);
//
// To print a size_t value in a portable way:
//   size_t size;
//   printf("xyz: %" PRIuS, size);
// The "u" in the macro corresponds to %u, and S is for "size".

#include <stddef.h>
#include <stdint.h>

#include "build/build_config.h"

#if (BUILDFLAG(IS_POSIX) || BUILDFLAG(IS_FUCHSIA)) && \
    (defined(_INTTYPES_H) || defined(_INTTYPES_H_)) && !defined(PRId64)
#error "inttypes.h has already been included before this header file, but "
#error "without __STDC_FORMAT_MACROS defined."
#endif

#if (BUILDFLAG(IS_POSIX) || BUILDFLAG(IS_FUCHSIA)) && \
    !defined(__STDC_FORMAT_MACROS)
#define __STDC_FORMAT_MACROS
#endif

#include <inttypes.h>

#if !defined(PRIuS)
#define PRIuS "zu"
#endif

#endif  // BASE_FORMAT_MACROS_H_
