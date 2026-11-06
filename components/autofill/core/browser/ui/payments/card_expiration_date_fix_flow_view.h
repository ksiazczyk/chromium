// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Card expiration date fix flow view interface
// summary: Cross-platform view interface that prompts the user to confirm the expiration date of their payment card and manages its own lifetime.
// ---

#ifndef COMPONENTS_AUTOFILL_CORE_BROWSER_UI_PAYMENTS_CARD_EXPIRATION_DATE_FIX_FLOW_VIEW_H_
#define COMPONENTS_AUTOFILL_CORE_BROWSER_UI_PAYMENTS_CARD_EXPIRATION_DATE_FIX_FLOW_VIEW_H_

namespace autofill {

// The cross-platform UI interface which prompts the user to confirm the
// expiration date of their form of payment. This object is responsible for its
// own lifetime.
class CardExpirationDateFixFlowView {
 public:
  virtual void Show() = 0;
  virtual void ControllerGone() = 0;

 protected:
  virtual ~CardExpirationDateFixFlowView() = default;
};

}  // namespace autofill

#endif  // COMPONENTS_AUTOFILL_CORE_BROWSER_UI_PAYMENTS_CARD_EXPIRATION_DATE_FIX_FLOW_VIEW_H_
