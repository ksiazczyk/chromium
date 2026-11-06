// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HighlightBorderOverlayDelegate interface
// summary: Defines the delegate interface for HighlightBorderOverlay that decides whether a window's highlight border should be rounded.
// ---

#ifndef CHROMEOS_UI_FRAME_HIGHLIGHT_BORDER_OVERLAY_DELEGATE_H_
#define CHROMEOS_UI_FRAME_HIGHLIGHT_BORDER_OVERLAY_DELEGATE_H_

namespace aura {
class Window;
}  // namespace aura

class HighlightBorderOverlayDelegate {
 public:
  HighlightBorderOverlayDelegate() = default;
  virtual ~HighlightBorderOverlayDelegate() = default;

  // Returns true, if the highlight border for `window` should be rounded.
  virtual bool ShouldRoundHighlightBorderForWindow(
      const aura::Window* window) = 0;
};

#endif  // CHROMEOS_UI_FRAME_HIGHLIGHT_BORDER_OVERLAY_DELEGATE_H_
