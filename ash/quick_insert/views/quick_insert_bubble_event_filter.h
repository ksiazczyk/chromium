// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quick Insert bubble event filter
// summary: Declares an event filter that closes the Quick Insert widget on clicks outside the widget or any of its child widgets.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /ash/bubble/bubble_event_filter.h
//   - depends_on /base/functional/callback.h
// ---

#ifndef ASH_QUICK_INSERT_VIEWS_QUICK_INSERT_BUBBLE_EVENT_FILTER_H_
#define ASH_QUICK_INSERT_VIEWS_QUICK_INSERT_BUBBLE_EVENT_FILTER_H_

#include "ash/ash_export.h"
#include "ash/bubble/bubble_event_filter.h"
#include "base/functional/callback.h"
#include "base/memory/raw_ptr.h"

namespace ui {
class LocatedEvent;
}  // namespace ui

namespace views {
class Widget;
}  // namespace views

namespace ash {

// Handles outside clicks for the Quick Insert widget.
// It closes the given widget if clicking outside of the widget or any of its
// children.
class ASH_EXPORT QuickInsertBubbleEventFilter : public BubbleEventFilter {
 public:
  // `widget` must outlive this class.
  explicit QuickInsertBubbleEventFilter(views::Widget* widget);
  QuickInsertBubbleEventFilter(const QuickInsertBubbleEventFilter&) = delete;
  QuickInsertBubbleEventFilter& operator=(const QuickInsertBubbleEventFilter&) =
      delete;
  ~QuickInsertBubbleEventFilter() override;

  // BubbleEventFilter:
  bool ShouldRunOnClickOutsideCallback(const ui::LocatedEvent& event) override;

 private:
  void OnClickOutsideWidget(const ui::LocatedEvent& event);

  raw_ptr<views::Widget> widget_;
};

}  // namespace ash

#endif  // ASH_QUICK_INSERT_VIEWS_QUICK_INSERT_BUBBLE_EVENT_FILTER_H_
