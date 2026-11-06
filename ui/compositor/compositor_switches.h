// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Compositor command-line switch declarations
// summary: Declares exported compositor switch constants and the IsUIZeroCopyEnabled helper that reports whether zero-copy uploads are enabled for the platform.
// ---

#ifndef UI_COMPOSITOR_COMPOSITOR_SWITCHES_H_
#define UI_COMPOSITOR_COMPOSITOR_SWITCHES_H_

#include "ui/compositor/compositor_export.h"

namespace switches {

COMPOSITOR_EXPORT extern const char kEnablePixelOutputInTests[];
COMPOSITOR_EXPORT extern const char kUIEnableRGBA4444Textures[];
COMPOSITOR_EXPORT extern const char kUIEnableZeroCopy[];
COMPOSITOR_EXPORT extern const char kUIDisableZeroCopy[];
COMPOSITOR_EXPORT extern const char kUIShowPaintRects[];
COMPOSITOR_EXPORT extern const char kUISlowAnimations[];
COMPOSITOR_EXPORT extern const char kDisableVsyncForTests[];

}  // namespace switches

namespace ui {

bool IsUIZeroCopyEnabled();

}  // namespace ui

#endif  // UI_COMPOSITOR_COMPOSITOR_SWITCHES_H_
