// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ProjectorColorButton class declaration
// summary: Declares ProjectorColorButton, a ProjectorButton subclass that shows a colored circular view for start/stop recording buttons and color picker buttons.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /ash/projector/ui/projector_button.h
//   - depends_on /ui/base/metadata/metadata_header_macros.h
// ---

#ifndef ASH_PROJECTOR_UI_PROJECTOR_COLOR_BUTTON_H_
#define ASH_PROJECTOR_UI_PROJECTOR_COLOR_BUTTON_H_

#include <string>

#include "ash/ash_export.h"
#include "ash/projector/ui/projector_button.h"
#include "ui/base/metadata/metadata_header_macros.h"

namespace ash {

// A view that shows a button with a color view which is used for start/stop
// recording buttons and color picker buttons.
class ASH_EXPORT ProjectorColorButton : public ProjectorButton {
  METADATA_HEADER(ProjectorColorButton, ProjectorButton)

 public:
  ProjectorColorButton(views::Button::PressedCallback callback,
                       SkColor color,
                       int size,
                       float radius,
                       const std::u16string& name);
  ProjectorColorButton(const ProjectorColorButton&) = delete;
  ProjectorColorButton& operator=(const ProjectorColorButton&) = delete;
  ~ProjectorColorButton() override = default;

  void PaintButtonContents(gfx::Canvas* canvas) override;

 private:
  SkColor color_;
  int size_;
};

}  // namespace ash

#endif  // ASH_PROJECTOR_UI_PROJECTOR_COLOR_BUTTON_H_
