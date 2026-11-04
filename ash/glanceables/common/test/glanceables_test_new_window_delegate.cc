// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Glanceables test new window delegate implementation
// summary: Implements the Glanceables test new window delegate, using a fake TestNewWindowDelegate that records the last URL passed to OpenUrl for verification in tests.
// relations:
//   - implements /ash/glanceables/common/test/glanceables_test_new_window_delegate.h
//   - depends_on /ash/public/cpp/test/test_new_window_delegate.h
//   - implements /ash/public/cpp/test/test_new_window_delegate.h
// ---

#include "ash/glanceables/common/test/glanceables_test_new_window_delegate.h"

#include <memory>
#include <utility>

#include "ash/public/cpp/test/test_new_window_delegate.h"
#include "url/gurl.h"

namespace ash {

class GlanceablesTestNewWindowDelegateImpl : public TestNewWindowDelegate {
 public:
  // TestNewWindowDelegate:
  void OpenUrl(const GURL& url,
               OpenUrlFrom from,
               Disposition disposition) override {
    last_opened_url_ = url;
  }

  GURL last_opened_url() const { return last_opened_url_; }

 private:
  GURL last_opened_url_;
};

GlanceablesTestNewWindowDelegate::GlanceablesTestNewWindowDelegate() {
  new_window_delegate_ =
      std::make_unique<GlanceablesTestNewWindowDelegateImpl>();
}

GlanceablesTestNewWindowDelegate::~GlanceablesTestNewWindowDelegate() = default;

GURL GlanceablesTestNewWindowDelegate::GetLastOpenedUrl() const {
  return new_window_delegate_->last_opened_url();
}

}  // namespace ash
