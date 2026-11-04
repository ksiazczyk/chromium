// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Address bubbles icon controller interface
// summary: Declares the controller interface for the address bubbles page action icon, exposing icon clicks, bubble state, tooltip text and bubble view access.
// ---

#ifndef CHROME_BROWSER_UI_AUTOFILL_ADDRESS_BUBBLES_ICON_CONTROLLER_H_
#define CHROME_BROWSER_UI_AUTOFILL_ADDRESS_BUBBLES_ICON_CONTROLLER_H_

#include "content/public/browser/web_contents.h"

namespace autofill {

class AutofillBubbleBase;

// The controller for AddressBubblesIconView.
class AddressBubblesIconController {
 public:
  virtual ~AddressBubblesIconController() = default;

  // Returns a reference to the AddressBubblesIconController associated with
  // the given |web_contents|. If controller does not exist, this will return
  // nullptr.
  static AddressBubblesIconController* Get(content::WebContents* web_contents);

  virtual void OnIconClicked() = 0;

  virtual bool IsBubbleActive() const = 0;

  virtual std::u16string GetPageActionIconTooltip() const = 0;

  virtual AutofillBubbleBase* GetBubbleView() const = 0;
};

}  // namespace autofill

#endif  // CHROME_BROWSER_UI_AUTOFILL_ADDRESS_BUBBLES_ICON_CONTROLLER_H_
