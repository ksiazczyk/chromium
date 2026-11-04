// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Map delegate interface for the Android unwinder
// summary: Interface for managing the lifecycle of libunwindstack memory region maps, intended to be implemented in Chrome code rather than the unwinder DFM.
// ---

#ifndef BASE_PROFILER_NATIVE_UNWINDER_ANDROID_MAP_DELEGATE_H_
#define BASE_PROFILER_NATIVE_UNWINDER_ANDROID_MAP_DELEGATE_H_

namespace base {

class NativeUnwinderAndroidMemoryRegionsMap;

// Interface of libunwindstack Map's lifecycle management. The
// implementation is designed to live in chrome code instead of in
// the stack unwinder DFM because DFM might not have enough information to make
// the decision.
class NativeUnwinderAndroidMapDelegate {
 public:
  virtual ~NativeUnwinderAndroidMapDelegate() = default;

  virtual NativeUnwinderAndroidMemoryRegionsMap* GetMapReference() = 0;
  virtual void ReleaseMapReference() = 0;
};

}  // namespace base

#endif  // BASE_PROFILER_NATIVE_UNWINDER_ANDROID_MAP_DELEGATE_H_
