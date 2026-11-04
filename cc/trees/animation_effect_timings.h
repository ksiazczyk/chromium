// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AnimationEffectTimings opaque handle
// summary: Declares an opaque handle class used to plumb animation effect timings from the Blink main thread to the worklet thread via the cc animations machinery.
// ---

#ifndef CC_TREES_ANIMATION_EFFECT_TIMINGS_H_
#define CC_TREES_ANIMATION_EFFECT_TIMINGS_H_

#include <memory>

#include "cc/cc_export.h"

namespace cc {

// This class acts as opaque handle in cc while the actual implementation lives
// in blink. It is meant to facilitate plumbing the effect timings from blink
// main thread to worklet thread via cc animations machinery.
class CC_EXPORT AnimationEffectTimings {
 public:
  virtual ~AnimationEffectTimings() = default;
  virtual std::unique_ptr<AnimationEffectTimings> Clone() const = 0;
};

}  // namespace cc

#endif  // CC_TREES_ANIMATION_EFFECT_TIMINGS_H_
