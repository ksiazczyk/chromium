// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Heap profiling switch declarations
// summary: Declares the command-line switch constant used to enable heap profiling for subprocesses, kept in alphabetical order with its value defined in the .cc file.
// ---

#ifndef COMPONENTS_HEAP_PROFILING_IN_PROCESS_SWITCHES_H_
#define COMPONENTS_HEAP_PROFILING_IN_PROCESS_SWITCHES_H_

namespace heap_profiling::switches {

// All switches in alphabetical order. The switches should be documented
// alongside the definition of their values in the .cc file.
extern const char kSubprocessHeapProfiling[];

}  // namespace heap_profiling::switches

#endif  // COMPONENTS_HEAP_PROFILING_IN_PROCESS_SWITCHES_H_
