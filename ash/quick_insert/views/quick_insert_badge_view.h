// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quick Insert badge view
// summary: Declares a badge view containing a label with an icon after it, built on BoxLayoutView with a view builder property for its text.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /ui/base/metadata/metadata_header_macros.h
//   - depends_on /ui/gfx/geometry/size.h
// ---

#ifndef ASH_QUICK_INSERT_VIEWS_QUICK_INSERT_BADGE_VIEW_H_
#define ASH_QUICK_INSERT_VIEWS_QUICK_INSERT_BADGE_VIEW_H_

#include <string>
#include <string_view>

#include "ash/ash_export.h"
#include "ui/base/metadata/metadata_header_macros.h"
#include "ui/gfx/geometry/size.h"
#include "ui/views/layout/box_layout_view.h"
#include "ui/views/layout/layout_types.h"
#include "ui/views/metadata/view_factory.h"

namespace views {
class Label;
}

namespace ash {

// View for a badge containing a label with an icon after it.
class ASH_EXPORT QuickInsertBadgeView : public views::BoxLayoutView {
  METADATA_HEADER(QuickInsertBadgeView, views::BoxLayoutView)

 public:
  QuickInsertBadgeView();
  QuickInsertBadgeView(const QuickInsertBadgeView&) = delete;
  QuickInsertBadgeView& operator=(const QuickInsertBadgeView&) = delete;
  ~QuickInsertBadgeView() override;

  std::u16string_view GetText() const;
  void SetText(const std::u16string& text);

  // views::BoxLayoutView:
  gfx::Size CalculatePreferredSize(
      const views::SizeBounds& available_size) const override;

 private:
  raw_ptr<views::Label> label_ = nullptr;
};

BEGIN_VIEW_BUILDER(ASH_EXPORT, QuickInsertBadgeView, views::BoxLayoutView)
VIEW_BUILDER_PROPERTY(const std::u16string&, Text)
END_VIEW_BUILDER

}  // namespace ash

DEFINE_VIEW_BUILDER(ASH_EXPORT, ash::QuickInsertBadgeView)

#endif  // ASH_QUICK_INSERT_VIEWS_QUICK_INSERT_BADGE_VIEW_H_
