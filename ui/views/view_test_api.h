// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: ViewTestApi test accessor for View
// summary: Provides a test-only API to inspect View layout and paint state such as the needs_layout and needs_paint flags.
// ---

#ifndef UI_VIEWS_VIEW_TEST_API_H_
#define UI_VIEWS_VIEW_TEST_API_H_

#include "base/memory/raw_ptr.h"
#include "ui/views/view.h"

namespace views {

class VIEWS_EXPORT ViewTestApi {
 public:
  explicit ViewTestApi(View* view) : view_(view) {}

  ViewTestApi(const ViewTestApi&) = delete;
  ViewTestApi& operator=(const ViewTestApi&) = delete;

  ~ViewTestApi() = default;

  bool needs_layout() { return view_->needs_layout(); }

  void ClearNeedsPaint() { view_->needs_paint_ = false; }
  bool needs_paint() const { return view_->needs_paint_; }
  bool paint_pending_while_locked() const {
    return view_->paint_pending_while_locked_;
  }

 private:
  raw_ptr<View> view_;
};

}  // namespace views

#endif  // UI_VIEWS_VIEW_TEST_API_H_
