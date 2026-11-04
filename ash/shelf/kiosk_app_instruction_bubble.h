// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Kiosk app instruction bubble header
// summary: Declares the bubble dialog view shown on the shelf to instruct kiosk users about the kiosk app menu button.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /ash/public/cpp/shelf_types.h
//   - depends_on /base/memory/raw_ptr.h
// ---

#ifndef ASH_SHELF_KIOSK_APP_INSTRUCTION_BUBBLE_H_
#define ASH_SHELF_KIOSK_APP_INSTRUCTION_BUBBLE_H_

#include "ash/ash_export.h"
#include "ash/public/cpp/shelf_types.h"
#include "base/memory/raw_ptr.h"
#include "third_party/skia/include/core/SkColor.h"
#include "ui/base/metadata/metadata_header_macros.h"
#include "ui/views/bubble/bubble_dialog_delegate_view.h"

namespace views {
class Label;
class View;
}  // namespace views

namespace ash {

// A shelf bubble instructing kiosk users to interact with the kiosk app menu
// button.
class ASH_EXPORT KioskAppInstructionBubble
    : public views::BubbleDialogDelegateView {
  METADATA_HEADER(KioskAppInstructionBubble, views::BubbleDialogDelegateView)

 public:
  KioskAppInstructionBubble(views::View* anchor, ShelfAlignment alignment);

  KioskAppInstructionBubble(const KioskAppInstructionBubble&) = delete;
  KioskAppInstructionBubble& operator=(const KioskAppInstructionBubble&) =
      delete;
  ~KioskAppInstructionBubble() override;

 private:
  // views::View:
  gfx::Size CalculatePreferredSize(
      const views::SizeBounds& available_size) const override;

  raw_ptr<views::Label> title_ = nullptr;
};

}  // namespace ash

#endif  // ASH_SHELF_KIOSK_APP_INSTRUCTION_BUBBLE_H_
