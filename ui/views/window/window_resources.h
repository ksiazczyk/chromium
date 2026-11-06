// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WindowResources interface for frame part images
// summary: Declares an interface providing images used to render window frame contents, swappable for different rendering modes.
// ---

#ifndef UI_VIEWS_WINDOW_WINDOW_RESOURCES_H_
#define UI_VIEWS_WINDOW_WINDOW_RESOURCES_H_

namespace gfx {
class ImageSkia;
}

namespace views {

using FramePartImage = int;

///////////////////////////////////////////////////////////////////////////////
// WindowResources
//
//  An interface implemented by an object providing images to render the
//  contents of a window frame. The Window may swap in different
//  implementations of this interface to render different modes. The definition
//  of FramePartImage depends on the implementation.
//
class WindowResources {
 public:
  virtual ~WindowResources() = default;

  virtual gfx::ImageSkia* GetPartImage(FramePartImage part) const = 0;
};

}  // namespace views

#endif  // UI_VIEWS_WINDOW_WINDOW_RESOURCES_H_
