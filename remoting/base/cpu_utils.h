// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CPU utility functions header
// summary: Declares helpers that check whether the CPU meets minimum hardware requirements and provide the SIMD memory alignment for the processor.
// ---

#ifndef REMOTING_BASE_CPU_UTILS_H_
#define REMOTING_BASE_CPU_UTILS_H_

namespace remoting {

// Returns true if the CPU meets the minimum hardware requirements (e.g. it
// supports a minimum required instruction set), otherwise false.
bool IsCpuSupported();

// Returns the data alignment (in bytes) required to use the most efficient SIMD
// instructions (SSE3, AVX2, NEON, etc.) supported by the processor.
int GetSimdMemoryAlignment();

}  // namespace remoting

#endif  // REMOTING_BASE_CPU_UTILS_H_
