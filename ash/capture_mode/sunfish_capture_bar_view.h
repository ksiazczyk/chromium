// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SunfishCaptureBarView class declaration
// summary: Declares the capture bar view used as the widget content for Sunfish capture sessions, containing only a close button.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /ash/capture_mode/capture_mode_bar_view.h
//   - depends_on /ui/base/metadata/metadata_impl_macros.h
// ---

#ifndef ASH_CAPTURE_MODE_SUNFISH_CAPTURE_BAR_VIEW_H_
#define ASH_CAPTURE_MODE_SUNFISH_CAPTURE_BAR_VIEW_H_

#include "ash/ash_export.h"
#include "ash/capture_mode/capture_mode_bar_view.h"
#include "ui/base/metadata/metadata_impl_macros.h"
#include "ui/views/view.h"

namespace ash {

// A view that acts as the content view of the capture mode bar widget for a
// sunfish capture session. It only contains the close button.
class ASH_EXPORT SunfishCaptureBarView : public CaptureModeBarView {
  METADATA_HEADER(SunfishCaptureBarView, CaptureModeBarView)

 public:
  // The `active_behavior` decides the capture bar configurations.
  SunfishCaptureBarView();
  SunfishCaptureBarView(const SunfishCaptureBarView&) = delete;
  SunfishCaptureBarView& operator=(const SunfishCaptureBarView&) = delete;
  ~SunfishCaptureBarView() override;

  // CaptureModeBarView:
  void SetSettingsMenuShown(bool shown) override;
};

}  // namespace ash

#endif  // ASH_CAPTURE_MODE_SUNFISH_CAPTURE_BAR_VIEW_H_
