// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DrawMode enum
// summary: Defines the DrawMode enum distinguishing hardware, software, and resourceless software drawing.
// ---

#ifndef CC_LAYERS_DRAW_MODE_H_
#define CC_LAYERS_DRAW_MODE_H_

namespace cc {

enum DrawMode {
  DRAW_MODE_NONE,
  DRAW_MODE_HARDWARE,
  DRAW_MODE_SOFTWARE,
  DRAW_MODE_RESOURCELESS_SOFTWARE
};

}  // namespace cc

#endif  // CC_LAYERS_DRAW_MODE_H_
