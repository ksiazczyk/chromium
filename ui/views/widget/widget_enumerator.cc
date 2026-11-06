// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Widget enumerator implementation
// summary: Implements safe iteration over a set of widgets, removing destroyed widgets from the set while operations run.
// ---

#include "ui/views/widget/widget_enumerator.h"

#include <utility>

#include "base/check.h"

namespace views {

WidgetEnumerator::WidgetEnumerator(Widget::Widgets widgets)
    : widgets_(std::move(widgets)) {
  for (Widget* widget : widgets_) {
    widget->AddObserver(this);
  }
}

WidgetEnumerator::~WidgetEnumerator() {
  // Remove any remaining observations.
  for (Widget* widget : widgets_) {
    widget->RemoveObserver(this);
  }
}

void WidgetEnumerator::OnWidgetDestroying(Widget* widget) {
  CHECK(widgets_.contains(widget));
  widget->RemoveObserver(this);
  widgets_.erase(widget);
}

bool WidgetEnumerator::IsEmpty() const {
  return widgets_.empty();
}

Widget* WidgetEnumerator::Next() {
  Widget* widget = *widgets_.begin();
  widget->RemoveObserver(this);
  widgets_.erase(widgets_.begin());
  return widget;
}

}  // namespace views
