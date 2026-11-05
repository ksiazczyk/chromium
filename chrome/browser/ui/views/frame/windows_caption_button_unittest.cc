// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WindowsCaptionButton focus behavior test
// summary: Unit test verifying that the Windows caption button uses accessible-only focus behavior.
// ---

#include "chrome/browser/ui/views/frame/windows_caption_button.h"

#include "chrome/browser/ui/view_ids.h"
#include "testing/gtest/include/gtest/gtest.h"
#include "ui/views/controls/button/button.h"
#include "ui/views/view.h"

TEST(WindowsCaptionButton, CheckFocusBehavior) {
  WindowsCaptionButton button(views::Button::PressedCallback(), nullptr,
                              VIEW_ID_NONE, std::u16string());
  EXPECT_EQ(views::View::FocusBehavior::ACCESSIBLE_ONLY,
            button.GetFocusBehavior());
}
