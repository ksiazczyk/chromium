// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: CastDialogAccessCodeCastButton unit tests
// summary: Unit test verifying the default 'Connect with a code' text of the access code cast button.
// ---

#include "chrome/browser/ui/views/media_router/cast_dialog_access_code_cast_button.h"

#include "chrome/test/views/chrome_views_test_base.h"
#include "ui/views/controls/styled_label.h"

namespace media_router {

class CastDialogAccessCodeCastButtonTest : public ChromeViewsTestBase {
 public:
  CastDialogAccessCodeCastButtonTest() = default;

  CastDialogAccessCodeCastButtonTest(
      const CastDialogAccessCodeCastButtonTest&) = delete;
  CastDialogAccessCodeCastButtonTest& operator=(
      const CastDialogAccessCodeCastButtonTest&) = delete;

  ~CastDialogAccessCodeCastButtonTest() override = default;
};

TEST_F(CastDialogAccessCodeCastButtonTest, DefaultText) {
  CastDialogAccessCodeCastButton button((views::Button::PressedCallback()));
  EXPECT_EQ(u"Connect with a code", button.title()->GetText());
}

}  // namespace media_router
