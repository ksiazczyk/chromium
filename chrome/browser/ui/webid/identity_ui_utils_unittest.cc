// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unit tests for identity UI utils
// summary: Tests GetInitialLetterAsUppercase with emoji, combining characters, and text in several scripts.
// ---

#include "chrome/browser/ui/webid/identity_ui_utils.h"

#include "testing/gtest/include/gtest/gtest.h"

TEST(IdentityUiUtilsTest, GetInitialLetterAsUppercase) {
  EXPECT_EQ(webid::GetInitialLetterAsUppercase("😊 starts with an emoji"),
            u"😊");
  EXPECT_EQ(webid::GetInitialLetterAsUppercase("English Text"), u"E");
  EXPECT_EQ(webid::GetInitialLetterAsUppercase("النص العربي"), u"ا");
  EXPECT_EQ(webid::GetInitialLetterAsUppercase("טקסט בעברית"), u"ט");
  EXPECT_EQ(webid::GetInitialLetterAsUppercase("中文文本"), u"中");
  EXPECT_EQ(
      webid::GetInitialLetterAsUppercase("h́ Text with combining character"),
      u"H́");
  EXPECT_EQ(webid::GetInitialLetterAsUppercase(
                "👩🏾‍⚕️ Emoji with skin tone (combining character)"),
            u"👩🏾‍⚕️");
}
