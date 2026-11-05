// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Card unmask prompt view tester for Views header
// summary: Declares the Views-specific card unmask prompt tester used to drive the prompt in tests.
// ---

#ifndef CHROME_BROWSER_UI_VIEWS_AUTOFILL_PAYMENTS_CARD_UNMASK_PROMPT_VIEW_TESTER_VIEWS_H_
#define CHROME_BROWSER_UI_VIEWS_AUTOFILL_PAYMENTS_CARD_UNMASK_PROMPT_VIEW_TESTER_VIEWS_H_

#include <string>

#include "base/memory/raw_ptr.h"
#include "chrome/browser/ui/autofill/payments/card_unmask_prompt_view_tester.h"

namespace autofill {

class CardUnmaskPromptViews;

// Class that facilitates testing a CardUnmaskPromptViews.
class CardUnmaskPromptViewTesterViews : public CardUnmaskPromptViewTester {
 public:
  explicit CardUnmaskPromptViewTesterViews(CardUnmaskPromptViews* view);

  CardUnmaskPromptViewTesterViews(const CardUnmaskPromptViewTesterViews&) =
      delete;
  CardUnmaskPromptViewTesterViews& operator=(
      const CardUnmaskPromptViewTesterViews&) = delete;

  ~CardUnmaskPromptViewTesterViews() override;

  // CardUnmaskPromptViewTester:
  void Close() override;
  void EnterCVCAndAccept(const std::u16string& cvc) override;

 private:
  raw_ptr<CardUnmaskPromptViews> view_;
};

}  // namespace autofill

#endif  // CHROME_BROWSER_UI_VIEWS_AUTOFILL_PAYMENTS_CARD_UNMASK_PROMPT_VIEW_TESTER_VIEWS_H_
