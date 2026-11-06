// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scoped CGContext state save helper for macOS
// summary: Declares a RAII wrapper that saves a CoreGraphics context state and restores it on destruction on macOS.
// ---

#ifndef UI_GFX_SCOPED_CG_CONTEXT_SAVE_GSTATE_MAC_H_
#define UI_GFX_SCOPED_CG_CONTEXT_SAVE_GSTATE_MAC_H_

#import <QuartzCore/QuartzCore.h>

namespace gfx {

class ScopedCGContextSaveGState {
 public:
  explicit ScopedCGContextSaveGState(CGContextRef context) : context_(context) {
    CGContextSaveGState(context_);
  }

  ScopedCGContextSaveGState(const ScopedCGContextSaveGState&) = delete;
  ScopedCGContextSaveGState& operator=(const ScopedCGContextSaveGState&) =
      delete;

  ~ScopedCGContextSaveGState() {
    CGContextRestoreGState(context_);
  }

 private:
  CGContextRef context_;
};

}  // namespace gfx

#endif  // UI_GFX_SCOPED_CG_CONTEXT_SAVE_GSTATE_MAC_H_
