// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BNPL terms of service view interface
// summary: Cross-platform view interface for the Buy-Now-Pay-Later terms of service view, owned by the BnplTosController.
// ---

#ifndef COMPONENTS_AUTOFILL_CORE_BROWSER_UI_PAYMENTS_BNPL_TOS_VIEW_H_
#define COMPONENTS_AUTOFILL_CORE_BROWSER_UI_PAYMENTS_BNPL_TOS_VIEW_H_

namespace autofill {

// The cross-platform view interface which helps show the Buy-Now-Pay-Later
// Terms of Service view for autofill flows. The view is owned by the
// `BnplTosController`.
class BnplTosView {
 public:
  virtual ~BnplTosView() = default;
};
}  // namespace autofill

#endif  // COMPONENTS_AUTOFILL_CORE_BROWSER_UI_PAYMENTS_BNPL_TOS_VIEW_H_
