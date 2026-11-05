// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mako consent view implementation
// summary: Implements the MakoConsentView bubble dialog that anchors the consent WebUI to the work area of the display containing the caret.
// ---

#include "chrome/browser/ui/webui/ash/mako/mako_consent_view.h"

#include "ui/base/metadata/metadata_impl_macros.h"
#include "ui/base/mojom/ui_base_types.mojom-shared.h"
#include "ui/display/screen.h"

namespace ash {

namespace {

constexpr int kMakoConsentCornerRadius = 20;

}  // namespace

MakoConsentView::MakoConsentView(WebUIContentsWrapper* contents_wrapper,
                                 const gfx::Rect& caret_bounds)
    : WebUIBubbleDialogView(nullptr, contents_wrapper->GetWeakPtr()) {
  set_has_parent(false);
  set_corner_radius(kMakoConsentCornerRadius);
  SetModalType(ui::mojom::ModalType::kSystem);
  SetArrowWithoutResizing(views::BubbleBorder::FLOAT);
  SetAnchorRect(
      display::Screen::Get()->GetDisplayMatching(caret_bounds).work_area());
}

MakoConsentView::~MakoConsentView() = default;

BEGIN_METADATA(MakoConsentView)
END_METADATA

}  // namespace ash
