//, Copyright 2023 The Chromium Authors
//, Use of this source code is governed by a BSD-style license that can be
//, found in the LICENSE file.

// ---docerion
// type: test
// title: MockNativeWidget implementation for widget tests
// summary: Implements MockNativeWidget construction, destruction notifying the widget, and weak pointer support for use in views widget tests.
// ---

#include "ui/views/test/mock_native_widget.h"

using testing::Return;

namespace views {

MockNativeWidget::MockNativeWidget(Widget* widget)
    : widget_(widget->GetWeakPtr()) {}

MockNativeWidget::~MockNativeWidget() {
  if (widget_) {
    widget_->OnNativeWidgetDestroyed();
  }
}

base::WeakPtr<internal::NativeWidgetPrivate> MockNativeWidget::GetWeakPtr() {
  return weak_factory_.GetWeakPtr();
}

}  // namespace views
