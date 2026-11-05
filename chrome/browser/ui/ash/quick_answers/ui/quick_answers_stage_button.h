// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quick Answers stage button class declaration
// summary: Declares QuickAnswersStageButton, a views::Button subclass that updates its background on focus, blur and state changes.
// ---

#ifndef CHROME_BROWSER_UI_ASH_QUICK_ANSWERS_UI_QUICK_ANSWERS_STAGE_BUTTON_H_
#define CHROME_BROWSER_UI_ASH_QUICK_ANSWERS_UI_QUICK_ANSWERS_STAGE_BUTTON_H_

#include "ui/base/metadata/metadata_header_macros.h"
#include "ui/base/metadata/metadata_impl_macros.h"
#include "ui/views/controls/button/button.h"
#include "ui/views/metadata/view_factory.h"

namespace quick_answers {

class QuickAnswersStageButton : public views::Button {
  METADATA_HEADER(QuickAnswersStageButton, views::Button)

 public:
  QuickAnswersStageButton();
  ~QuickAnswersStageButton() override;

  QuickAnswersStageButton(const QuickAnswersStageButton&) = delete;
  QuickAnswersStageButton& operator=(const QuickAnswersStageButton&) = delete;

 protected:
  // views::View:
  void OnFocus() override;
  void OnBlur() override;

  // views::Button:
  void StateChanged(views::Button::ButtonState old_state) override;

 private:
  void UpdateBackground();
};

BEGIN_VIEW_BUILDER(/* no export */, QuickAnswersStageButton, views::Button)
END_VIEW_BUILDER

}  // namespace quick_answers

DEFINE_VIEW_BUILDER(/* no export */, quick_answers::QuickAnswersStageButton)

#endif  // CHROME_BROWSER_UI_ASH_QUICK_ANSWERS_UI_QUICK_ANSWERS_STAGE_BUTTON_H_
