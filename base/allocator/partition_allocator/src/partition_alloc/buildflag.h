// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PA_BUILDFLAG accessor macro
// summary: Header defining the PA_BUILDFLAG macro that reads build flags through mangled function-style defines so PartitionAlloc and Chromium can coexist.
// ---

#ifndef PARTITION_ALLOC_BUILDFLAG_H_
#define PARTITION_ALLOC_BUILDFLAG_H_

// This was copied from chromium's and adapted to partition_alloc.
// Please refer to chromium's //build/buildflag.h original comments.
//
// Using a different macro and internal define allows partition_alloc and
// chromium to cohabit without affecting each other.
#define PA_BUILDFLAG_CAT_INDIRECT(a, b) a##b
#define PA_BUILDFLAG_CAT(a, b) PA_BUILDFLAG_CAT_INDIRECT(a, b)
#define PA_BUILDFLAG(flag) (PA_BUILDFLAG_CAT(PA_BUILDFLAG_INTERNAL_, flag)())

#endif  // PARTITION_ALLOC_BUILDFLAG_H_
